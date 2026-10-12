#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int divisors = 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            divisors++;
        }
    }
    if (divisors == 0) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

