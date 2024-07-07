#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
	char buf[10];
	int fd = open("demo.txt",O_RDONLY);
	if(fd < 0){
		perror("Falied to open");
		return 1;
	}
	lseek(fd,10,SEEK_SET);
	read(fd,buf,10);
	write(1,buf,10);
	close(fd);
	return 0;
}
