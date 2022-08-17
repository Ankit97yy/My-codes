#include <stdio.h>
#include <string.h>
int main()
{
    int at[10], bt[10], wt[10], tat[10], p[10], n, burst = 0, compl = 0;
    float awt, atat, total;
    printf("enter number of proccess");
    scanf("%d", &n);
    printf("enter arrival time\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &at[i]);
    }
    printf("enter burst time\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (at[j] > at[j + 1])
            {
                int temp = at[j + 1];
                at[j + 1] = at[j];
                at[j] = temp;
                temp = bt[j + 1];
                bt[j + 1] = bt[j];
                bt[j] = temp;
            }
        }
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        compl +=bt[i];
        tat[i] = compl - at[i];
        wt[i] = tat[i] - bt[i];
        awt+=wt[i];
        atat+=tat[i];
    }
    printf("arrival time\t burst time\t waiting time\t turnaround time\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d", at[i], bt[i], wt[i], tat[i]);
        printf("\n");
    }
    printf("awt=%2f\n",awt/n);
    printf("atat=%2f",atat/n);
}