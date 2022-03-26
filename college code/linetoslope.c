#include<stdio.h>
#include<stdbool.h>

int main()
{
    int x1, x2, y1, y2;
    printf("Enter the value of first line coordinates (x1 and y1) = ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of first line coordinates (x2 and y2) = ");
    scanf("%d %d", &x2, &y2);
    int m1;
    m1 = (y2 - y1) / (x2 - x1);
    int x3, x4, y3, y4;
    printf("Enter the value of second line coordinates (x3 and y3) = ");
    scanf("%d %d", &x3, &y3);
    printf("Enter the value of second line coordinates (x4 and y4) = ");
    scanf("%d %d", &x4, &y4);
    int  m2;
    m2 = (y4 - y3) / ( x4 - x3);     
    // bool t = ((m1 * m2) * - 1 ==  1);
    int t = ((m1 * m2) * - 1 ==  1);
    printf("%d", t);
    return 0;
}