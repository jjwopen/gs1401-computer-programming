#include <stdio.h>

int main(void)
{
    int integer1;
    int integer2;
    int integer3;
    int integer4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &integer1, &integer2, &integer3, &integer4);

    int max = integer1;
    int min = integer1;

    if (integer2 > max) max = integer2;
    if (integer2 < min) min = integer2;

    if (integer3 > max) max = integer3;
    if (integer3 < min) min = integer3;

    if (integer4 > max) max = integer4;
    if (integer4 < min) min = integer4;

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}
