#include<stdio.h>
#include<math.h>
#define g 10

int main()
{
    float u, time;
    printf("Enter the initial velocity of the stone = ");
    scanf("%f", &u);
    printf("Enter the time period of the motion = ");
    scanf("%f", &time);
    float s = u * time + 0.5 * g * pow(time, 2);
    float v = u + g * time;
    printf("The distance travelled by the stone is = %.3f \n", s);
    printf("The final velocity of stone is = %.3f", v);
    return 0;
}