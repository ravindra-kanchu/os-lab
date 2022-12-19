#include<stdio.h>
# define max 30
 void main(){
    int i,j,n,t,p[max],bt[max],wt[max],tat[max];
    float awt,atat;
    printf("Enter the no of process");
    scanf("%d",&n);
    printf("Enter the process number");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
     for ( i = 0; i < n; i++)
     {
      printf("Enter the burst time of %d :",i+1);
      scanf("%d",&bt[i]);
     }
     for ( i = 0; i <n; i++)
     {
        for ( j = 0; j<n-i-1; j++)
        {
            if (bt[j]>bt[j+1]){
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }  
     }
    //  for ( i = 0; i < n; i++)
    //  {
    //     printf("%d\t",bt[i]);
    //  }
     
     
   printf("process\t\t Burst time\t\t WT\t\t TAT\t\t\n");
   for(i = 0;i< n; i++)
   {
     wt[i]=0;
     tat[i]=0;
     for( j = 0; j<i; j++)
     { 
        wt[i]=wt[i]+bt[j];
     }
     tat[i]=wt[i]+bt[i];
     awt=awt+wt[i];
     atat=atat+tat[i];
    printf(" %d\t\t%d\t\t %d\t\t %d\n", p[i], bt[i], wt[i], tat[i]); 
   }
    awt = awt/n;
    atat = atat/n;
    printf("The average waiting time is %f\n", awt);
    printf("The average turn around time is %f", atat);
 }