// program copy files from one to another using system calls

#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc,char *argv[]){
    int fd1,fd2,n;
    char buff[100];
    fd1=open("b.txt",O_RDONLY);
    fd2=open("c.txt",O_WRONLY);
    n=read(fd1,buff,sizeof(buff));
    write(fd2,buff,n);
    close(fd1);
    close(fd2);

}