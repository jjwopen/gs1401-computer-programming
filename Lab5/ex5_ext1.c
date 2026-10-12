#include <stdio.h>

double average(int a, int b, int c);

int main(void)
{
    int a, b ,c;

    printf("Enter three integer scores: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The average score is: %.2f\n", average(a, b ,c));

    return 0;
}

double average(int a, int b, int c)
{
    return (a+b+c)/3.0;
}
