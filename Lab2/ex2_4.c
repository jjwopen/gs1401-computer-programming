#include <stdio.h>

int main(void)
{
    int integer1;

    printf("Enter a number: ");
    scanf("%d", &integer1);

    int sum = 0;
    int sum_current = 1;
    while (sum_current <= integer1) {
        sum = sum + sum_current;
        sum_current = sum_current + 1;
    }

    printf("Sum = %d\n", sum);

    int reverse_current = integer1;
    printf("Reverse order:");
    while (reverse_current >= 1) {
        printf(" %d", reverse_current);
        reverse_current = reverse_current - 1;
    }
    printf("\n");

    return 0;
}
