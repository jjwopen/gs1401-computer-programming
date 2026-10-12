#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The prime factors of %d :", n);

    int temp = n;
    for (int i = 2; i <= n; i++) {
        while (temp % i == 0) {
            temp /= i;
            printf(" %d", i);
        }
    }

    printf("\n");

    return 0;
}
