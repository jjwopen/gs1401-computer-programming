#include <stdio.h>

int absolute(int num)
{
    return num < 0 ? -num : num;
}

int main(void)
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Output: %d\n", absolute(a));

    return 0;
}
