#include <stdio.h>

int main()
{
    int a = 12, b = 25;
    printf("Output = %d\n", a & b);
    printf("Output = %d\n", a | b);
    printf("Output = %d\n", a ^ b);
    printf("Output = %d\n", ~35);
    printf("Output = %d\n", ~-12);
    printf("output = %d\n", 0x89 >> 3);
    printf("Output = %d\n", ~0x12);
    printf("Output = %d\n", 0x89 & 0x01);
    printf("Output = %d\n", 0x01 & 0x00);
    printf("Output = %d\n", 0x01 & 0x01);
    printf("Output = %d\n", 0x66 & 0x22);
    printf("Output = %d\n", 0x88 & 0x01);
    printf("Output = %d\n", 0x44 | 0x22);
    printf("Output = %d\n", ~0x98);
    printf("Output = %d\n", 0x01 << 1);
    printf("Output = %d\n", 0x01 | 0x00);
    printf("Output = %d\n", 0x01 | 0x01);

    return 0;
}