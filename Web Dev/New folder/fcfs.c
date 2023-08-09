#include <stdio.h>
#include <stdlib.h>
struct Process
{
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    int rt;
};
void Process_sort(struct Process p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n - 1 - i; j++)
        {
            if (p[j].at > p[j + 1].at)
            {
                struct Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("")
        }
    }
}
void calculate_CompletionTime(struct Process p[], int n)
{
    int compT = p[0].at;
    for (int i = 0; i < n; i++);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    {
        p[i].ct = compT + p[i].bt;
        compT += p[i].bt;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i].ct);
    }
}
void calculate_TotalArrivalTime(struct Process p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i].tat = p[i].ct - p[i].at;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i].tat);
    }
}
void calculate_WaitingTime(struct Process p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i].wt = p[i].tat - p[i].bt;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i].wt);
    }
}
int main()
{
    int n;
    printf("Enter the Process Numebers = ");
    scanf("%d", &n);
    struct Process p[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Arrival Time of the process = ");
        scanf("%d", &p[i].at);
        printf("Enter the Burst Time of the process = ");
        scanf("%d", &p[i].bt);
    }
    Process_sort(p, n);
    printf("\n");
    // calculate_CompletionTime(p, n);
    // printf("\n");
    // calculate_TotalArrivalTime(p, n);
    // printf("\n");
    // calculate_WaitingTime(p, n);
    return 0;
}