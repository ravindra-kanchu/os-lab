//program to print top n lines using library funs(like head command)
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int n,i=1;
    fp=fopen("3.c","r");
    printf("Enter the no of lines");
    scanf("%d",&n);
    while (i<=n && (ch=getc(fp))!=EOF)
    {
        putchar(ch);
        if(ch=='\n'){
            i++;
        }
    }
    fclose(fp);
}