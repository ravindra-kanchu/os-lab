// program 1 
// write data onto file using keyboard

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("b.txt","w");
    printf("enter data\n");
    while((ch=getchar())!='#')
    {
    putc(ch,fp);
    }
    fclose(fp);

}