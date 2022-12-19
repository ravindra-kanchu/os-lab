#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, k, n, no, frames[10], ref_str[50], avail, fcount = 0;
    printf("enter the no of pages");
    scanf("%d", &n);
    printf("enter the string reference");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ref_str[i]);
    }
    printf("enter the no of frames");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
    {
        frames[i] = -1;
    }

    j = 0;
    printf("pages\t\t frames\t\t\t Hit/Fault");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t", ref_str[i]);
        avail = 0;
        for (k = 0; i < no; k++)
            if (frames[k] == ref_str[i])
            {
                avail = 1;
                for (k = 0; k < no; k++)
                    printf("%d\t", frames[k]);
                printf("H");
            }

        if (avail == 0)
        {
            frames[j] = ref_str[i];
            j = (j + 1) % no;
            fcount++;
            for (k = 0; k < no; k++)
                printf("%d\t\t", frames[k]);
            printf("F");
        }
        printf("\n");
    }
    printf("The no of page faults is %d", fcount);
}