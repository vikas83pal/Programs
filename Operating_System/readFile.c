#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main(){
    int fd;
    char buf[10];
    fd=open("demo.txt",O_RDONLY);
    if(fd<0){
        perror("File Does not exist\n");
        return 1;
    }
    if(read(fd,buf,5)!=5){
        perror("Read");
        return 1;
    }
    buf[5]='\0';
    printf("read: %s\n",buf);
    close(fd);
    return 0;
}
