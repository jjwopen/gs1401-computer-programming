#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    int first = num % 10;
    int second = (num % 100) / 10;
    int third = num / 100;

    int new = first * 100 + second * 10 + third;

    printf("Revered number: %d\n", new);
}
