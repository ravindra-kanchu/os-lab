// copy file from another file

#include<stdio.h>
int main(){
    FILE *fp1;
    FILE *fp2;
    char ch;
    fp1=fopen("b.txt","r");
    fp2=fopen("c.txt","w");
    while((ch=getc(fp1))!=EOF)
    {
        putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}