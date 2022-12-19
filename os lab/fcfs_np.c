#include <stdio.h>
#include <stdlib.h>
#define max 10

void main()
{
    int i, j, n, bt[max], wt[max], tat[max];
    float awt = 0, atat = 0;
    printff("enter the no of process");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printff("Enter the brust time of process %d \n", i + 1);
        scanf("%d", &bt[i]);
    }
    printff("process\t\tBurst time\t\t WT\t\t TAT\n");
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
        printff("process %d\t\t%d\t\t %d\t\t %d\n", i + 1, bt[i], wt[i], tat[i]);
    }
    awt = awt/n;
    atat = atat/n;
    printff("The average waiting time is %f\n", awt);
    printff("The average turn around time is %f", atat);
}