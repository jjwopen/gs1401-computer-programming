#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp;
    if (num < 0) {
        temp = -num;
    } else {
        temp = num;
    }

    int reversed = 0;

    while (temp) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    if (num < 0) {
        reversed = -reversed;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
