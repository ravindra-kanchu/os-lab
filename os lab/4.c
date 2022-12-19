//program to print last most lines(tail() command)
#include<stdio.h>
int main(){
    FILE *fp;
    int j=0,n,s[1000],cnt=0;
    char ch;
    fp=fopen("4.c","r");
    printf("enter the no of lines");
    scanf("%d",&n);
    while ((ch=getc(fp))!=EOF)
    {
        s[j++]=ch;
        if (ch=='\n')
        cnt++;
    }
    int size=cnt;
    cnt=0;
    int i=0;
    while (s[i]!='\0')
    {
        if(cnt>=size-n)
        printf("%c",s[i]);
        if(s[i]=='\n')
        cnt++;
    i++;
    }
    fclose(fp);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     