#include <stdio.h>

int main(void)
{
    int count = 0;
    int input = 0;

    do {
        printf("Enter an integer: ");
        scanf("%d", &input);
        if (input > 0) {
            count++;
        }
    } while (input >= 0);

    printf("Number of positive integers: %d", count);

    return 0;
}

