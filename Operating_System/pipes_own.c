#include<stdio.h>  //standard library like printf
#include<stdlib.h> // liibrary used for perror or exit
#include<sys/types.h> //data types used for system calls
#include<sys/wait.h> //used for wait to terminate the process
#include<unistd.h>  //used to access the POSIX system calls

#define SIZE 20

int main(){
	
	int fd[2];
	pid_t pid;
	char write_msg[SIZE] = "Hello Wolrld!..";
	char read_msg[SIZE];
	
	if(pipe(fd) == -1){		//creating the pipe 
		perror("Pipe falied");
		return 1;
	}
	
	pid = fork(); //POSIX
	
	if(pid < 0){
		perror("Fork is failed");
		return 1;
	}
	
	if(pid > 0){ //parent process
		close(fd[0]); //close the read end
		write(fd[1],write_msg,sizeof(write_msg));
		close(fd[1]);
		wait(NULL);
	}else{ //child process
		close(fd[1]);
		read(fd[0],read_msg,sizeof(read_msg));
		printf("Child Read:%s\n",read_msg);
		close(fd[0]);
		wait(NULL);
	}
	
	
	return 0;
}
