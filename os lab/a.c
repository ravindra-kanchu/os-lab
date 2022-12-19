#include<stdio.h>
int main(int argc,char *argv[]){
    int i;
    for ( i = 0; i < argc; argc++)
    {
        printf("%s\n",argv[i]);
    }
    
}