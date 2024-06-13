#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define FIFO_NAME "myfifo"
#define SIZE 20

int main() {
    int fd;
    char write_msg[SIZE] = "hello fifo";
    char read_msg[SIZE];

    // Create the named pipe (FIFO)
    mkfifo(FIFO_NAME, 0666);

    if (fork() == 0) { // Child process
        fd = open(FIFO_NAME, O_RDONLY);
       
        read(fd, read_msg, sizeof(read_msg));
        printf("Child Read: %s\n", read_msg);
        close(fd);
    } else { // Parent process
        fd = open(FIFO_NAME, O_WRONLY);
        s
        write(fd, write_msg, sizeof(write_msg));
        close(fd);
        wait(NULL); // Wait for child process to finish
    }

    // Remove the FIFO file
    unlink(FIFO_NAME);

    return 0;
}

