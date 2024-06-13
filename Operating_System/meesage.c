#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>
#include<sys/wait.h>

typedef struct msg_buffer {
    long msg;           // Message type
    char msgText[100];  // Message text
} msgbuf;

int main() {
    key_t key; // Used to hold a unique key for the message queue
    int msgid; // Unique identifier for the message queue
    msgbuf message; // Message buffer

    // Generating the key
    key = ftok("progfile", 65); // ftok (file to key)

    // Create a message queue if it does not exist with read and write permission
    msgid = msgget(key, 0666 | IPC_CREAT);

    if (fork() == 0) { // Child process
        // Receiving a message from the message queue
        msgrcv(msgid, &message, sizeof(message.msgText), 1, 0); // Last argument 0 means blocking mode
        printf("Child read: %s\n", message.msgText);
    } else { // Parent process
        // Preparing the message to be sent
        message.msg = 1;
        strcpy(message.msgText, "Hello, world!");

        // Sending the message to the message queue
        msgsnd(msgid, &message, sizeof(message.msgText), 0); // Last argument 0 means blocking mode

        // Wait for the child process to finish
        wait(NULL);
    }

    // Destroying the message queue
    msgctl(msgid, IPC_RMID, NULL);

    return 0;
}
