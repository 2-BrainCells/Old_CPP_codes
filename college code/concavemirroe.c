#include <stdio.h>

int main()
{
    float u, v, focus, radius;
    printf("Enter the focal lenght of mirror = ");
    scanf("%f", &focus);
    printf("Enter the object distance form  mirror = ");
    scanf("%f", &u);
    radius = 2 * focus;
    v = (u * focus) / (focus - u);
    if (v == focus)-
        printf("The image is formed at the focus , the size is diminished and is real");
    if (radius < u)
        printf("The image is formed between focus and center of curvature , the size is diminished and is real");
    if (radius > u && radius < focus)
        printf("The image is formed beyond center of curvature , the size is same and is real");
    if (radius == u)
        printf("The image is formed at center of curvature , the size is Enlarged and is real");
    if (u == focus)
        printf("The image is formed at fomcus , the size is Highly Enlarged and is real");
    return 0;
}
