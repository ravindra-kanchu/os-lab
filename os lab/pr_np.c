#include<stdio.h>
#define max 30
 void main(){
    int n,i,j,t,pr[max],bt[max],wt[max],tat[max],pos;
    float awt,atat;
    printf("Enter the no of process");
    scanf("%d",&n);
    printf("Enter the burst time of process");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Enter the priority of process");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&pr[i]);
    }
    
    for ( i = 0; i <n; i++)
    {
        pos=i;
        for ( j = i+1; j< n; j++)
        {
            if(pr[j]<pr[pos])
            pos=j;
        }
        t=pr[i];
        pr[i]=pr[pos];
        pr[pos]=t;

        t=bt[i];
        bt[i]=bt[pos];
        bt[pos]=t;
    }
    printf("process\t\tBurst time\t\tpriority\t\t WT\t\t TAT\n");
    for ( i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for (j = 0; j < i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
        
        tat[i] = wt[i]+bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
    printf(" %d\t\t%d\t\t\t%d\t\t\t %d\t\t %d\n", i + 1, bt[i], pr[i], wt[i], tat[i]);
    }
   wt = awt/n;
    atat = atat/n;
    printf("The average waiting time is %f\n", awt);
    printf("The average  aturn around time is %f", atat);
    

 }