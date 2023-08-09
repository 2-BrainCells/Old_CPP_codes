#include <stdio.h>
int main()
{
    int x = 20934; // 0xBFEE19
    for (size_t i = 0; i < sizeof(x); ++i)
    {
        // Convert to unsigned char* because a char is 1 byte in size.
        // That is guaranteed by the standard.
        // Note that is it NOT required to be 8 bits in size.
        unsigned char byte = *((unsigned char *)&x + i);
        printf("Byte %d = %u\n", i, (unsigned)byte);
    }
    return 0;
}