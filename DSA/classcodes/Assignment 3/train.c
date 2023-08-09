#include <stdio.h>
#include <string.h>
struct timer
{
    int val;
    int min;
    char pre[2];
};
struct train
{
    char name[100];
    struct timer tim;
};
void getData(struct train t[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of the train %d = ", i);
        scanf("%s", &t[i].name);
        printf("Enter the time of value of time \n");
        scanf("%d %d %s", &t[i].tim.val, &t[i].tim.min, &t[i].tim.pre);
    }
}
void timePrint(struct train t[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (t[i].tim.val == 12 && strcmpi(t[i].tim.pre, "pm") == 0)
        {
            t[i].tim.val = t[i].tim.val;
        }
        else if (t[i].tim.val == 0 && strcmpi(t[i].tim.pre, "am") == 0)
        {
            t[i].tim.val = t[i].tim.val;
        }
        else if (strcmp(t[i].tim.pre, "pm") == 0)
            t[i].tim.val = t[i].tim.val + 12;
    }
}

void putData(struct train t[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The name of the train = %s\n", t[i].name);
        printf("The time of the train is = %d:%d Hrs \n", t[i].tim.val, t[i].tim.min, t[i].tim.pre);
    }
}
int main()
{
    struct train t[5];
    getData(t);
    timePrint(t);
    putData(t);
    return 0;
}