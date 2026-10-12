#include <stdio.h>

int main(void)
{
    int integer1;
    int integer2;

    printf("Enter two integers: ");
    scanf("%d %d", &integer1, &integer2);

    int subtract;
    subtract = integer1 - integer2;
    printf("%d", subtract);

    return 0;
}
