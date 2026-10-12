#include <stdio.h>

int power_iter(int a, int n);
int power_rec(int a, int n);

int main(void)
{
    int a, n;

    printf("Enter base a and exponent n: ");
    scanf("%d %d", &a, &n);

    printf("%d\n%d\n", power_iter(a, n), power_rec(a, n));

    return 0;
}

int power_iter(int a, int n)
{
    int res = 1;
    for (int i=0; i<n; i++) {
        res *= a;
    }
    return res;
}

int power_rec(int a, int n)
{
    if (n == 0) return 1;
    if (n == 1) return a;
    return a * power_rec(a, n-1);
}
