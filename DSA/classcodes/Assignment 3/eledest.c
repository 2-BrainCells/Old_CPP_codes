#include <stdio.h>
struct elder
{
    char ename[100];
    int eage;
    char ecity[100];
};

void putData(struct elder e[5], int i)
{
    printf("The name of the person = %s\n", e[i].ename);
    printf("The age of the person = %d\n", e[i].eage);
    printf("The city of the person = %s\n", e[i].ecity);
}
void eldest(struct elder e[5])
{
    int eldest = e[0].eage, val;
    for (int i = 1; i < 5; i++)
    {
        if (e[i].eage > eldest)
        {
            val = i;
            eldest = e[i].eage;
        }
    }
    putData(e, val);
}
void getData(struct elder e[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of the person %d = ", i + 1);
        scanf("%s", &e[i].ename);
        printf("Enter the age of the person %d = ", i + 1);
        scanf("%d", &e[i].eage);
        printf("Enter the city of the person %d = ", i + 1);
        scanf("%s", &e[i].ecity);
    }
}
int main()
{
    struct elder e[5];
    getData(e);
    eldest(e);
    return 0;
}