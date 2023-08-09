#include <stdio.h>
#include <stdlib.h>

struct Process
{
    int pid; // process ID
    int at;  // arrival time
    int bt;  // burst time
    int pri;
    int ct;  // completion time
    int wt;  // waiting time
    int tat; // turnaround time
    int rt;  // remaining time
};

void enter(struct Process ps[], int n)
{
    for (int i = 0; i < n; i++)

    {
        printf("Enter the pid for the process = ");
        scanf("%d", &ps[i].pid);
        printf("Enter the arrival for the process = ");
        scanf("%d", &ps[i].at);
        printf("Enter the burst for the process = ");
        scanf("%d", &ps[i].bt);
        printf("Enter the priority for the process = ");
        scanf("%d", &ps[i].pri);
    }
}
void arrangePriority(struct Process ps[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ps[j].pri > ps[j + 1].pri)
            {
                struct Process temp = ps[j];
                ps[j] = ps[j + 1];
                ps[j + 1] = temp;
            }
        }
    }
}
void calculate(struct Process ps[], int n)
{
    int count = ps[0].at;
    for (int i = 0; i < n; i++)
    {
        ps[i].ct = count + ps[i].at;
    }
}
void print(struct Process ps[], int n)
{
    for (int i = 0; i < n; i++)

    {
        printf("The pid for the process = %d \n", ps[i].pid);
        printf("The arrival time for the process = %d \n", ps[i].at);
        printf("The burst time for the process = %d \n", ps[i].bt);
        printf("The priority of the process = %d \n", ps[i].pri);
    }
}
int main()
{
    int n;
    printf("Enter the process number = ");
    scanf("%d", &n);
    struct Process ps[100];
    enter(ps, n);
    arrangePriority(ps, n);
    print(ps, n);
    return 0;
}