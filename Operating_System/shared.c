#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<string.h>


int main(){
	key_t key = ftok("shmfile",17);
	int shmid = shmget(key,1224,0666 | IPC_CREAT);
	
	char *str = (char*) shmat(shmid,(void*)0,0);
	
	if(fork() == 0){
		//sleep(1);
		printf("Child read:%s\n",str);
	}else{
		strcpy(str,"hello world");
		wait(NULL);
	}
	shmdt(str);
	shmctl(shmid,IPC_RMID,NULL);
	
	return 0;
}
