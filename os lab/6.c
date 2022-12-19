 // program to implement head() using system calls
 #include<stdio.h>
 #include<fcntl.h>
 #include<sys/types.h>
 #include<sys/stat.h>
 #include<unistd.h>
int main(int argc,char *argv[])
{
    int c=0,fd1,n,nol,i=0;
    char buff1[100],buff2[100];
    printf("enter the no of lines");
    scanf("%d",&nol);
    fd1=open("5.c",O_RDONLY);
    n=read(fd1,buff1,sizeof(buff1));
    while (c<nol)
    {
        buff2[i]=buff1[i];
        if (buff1[i]=='\n'){
            c++;
        }
    i++;  
    }
    buff2[i]='\0';
    write(1,buff2,i);
    close(fd1);
}
