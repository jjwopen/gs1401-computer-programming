#include <stdio.h>

int countPositive(int a, int b, int c);

int main(void)
{
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Input: %d %d %d\n", a, b ,c);

    printf("Number of positive values: %d\n", countPositive(a, b, c));

    return 0;
}

int countPositive(int a, int b, int c)
{
    return (a > 0) + (b > 0) + (c > 0);
}
