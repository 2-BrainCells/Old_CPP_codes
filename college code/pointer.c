#include <stdio.h>

int main()
{
    int *pc;
    int c;
    c = 22;
    printf("Address of c:%u\n", &c);
    printf("Value of c:%d\n\n", c);
    pc = &c;
    printf("Address of pointer pc:%u\n", pc);
    printf("Content of pointer pc:%d\n\n", c);
    c = 11;
    printf("Address of pointer pc:%u\n", pc);
    printf("Content of pointer pc:%d\n\n", c);
    *pc = 2;
    printf("Address of c:%u\n", &c);
    printf("Value of c:%d\n\n", pc);
}