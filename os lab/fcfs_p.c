#include<stdio.h>
# define max 30
void main(){
    int i,j,n,bt[max],at[max],wt[max],tat[max] ,temp[max];
    float awt,atat;
     printf("Enter the no of process");
    scanf("%d",&n);
    printf("Enter the burst time of process");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Enter the arrival time of process");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&at[i]);
    }
  printf("process\t\tBurst time\t Arrival time\t WT\t\tTAT\n");
  temp[0]=0;
    for ( i = 0; i < n; i++)
    {
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
 printf("%d\t\t%d\t\t\t%d\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
    }
    awt = awt/n;
    atat = atat/n;
    printf("The average waiting time is %f\n", awt);
    printf("The average  aturn around time is %f", atat);
}