// to find the status of the file
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
 int main(int argc,char *argv[]){
    struct stat buf;
    if(stat(argv[1],&buf)<0)
    printf("error");
    else{
        printf("\n UID:%d",buf.st_uid);
        printf("\n GUD:%d",buf.st_gid);
        printf("\nINO:%d",buf.st_ino);
        printf("\nATIME:%d",buf.st_atime);
        printf("\n MTIME:%d",buf.st_mtime);
        printf("\n CTIME:%d",buf.st_ctime);
    }

 }