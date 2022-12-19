// program to implement is command
// to display files in a certain directory

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<dirent.h>

int main(){
    DIR *dp;
    struct dirent *ds;
    char dname[10];
    printf("Enter the directory name");
    scanf("%s",dname);
    dp=opendir(dname);
    if (dp==NULL){
        printf("directory does not exist");
        exit(0);
    }
    printf("the files in the directory are...\n");
    while((ds=readdir(dp))!=NULL)
    {
        printf("%s\n",ds->d_name);
    }
    closedir(dp);  

}

// #include<sys/stat.h>
// #include<sys/types.h>
// #include<unistd.h>
// int main(int argc,char *argv[]){
//     link(argv[1],argv[2]);
//     unlink(argv[1]);
//     return 0;
// }

