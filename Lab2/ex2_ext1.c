#include <stdio.h>

int main(void)
{
    int integer;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    if (integer % 2 == 0) {
        printf("It is even\n");
    } else {
        printf("It is odd\n");
    }

    if (integer % 7 == 0) {
        printf("It is also a multiple of 7\n");
    }

    return 0;
}
