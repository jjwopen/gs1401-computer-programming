#include <stdio.h>

int main(void)
{
    int integer;
    int counter = 1;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    while (integer >= 10) {
        integer = integer / 10;
        counter = counter + 1;
    }

    printf("Number of digits: %d\n", counter);
}
