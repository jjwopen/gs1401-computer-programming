#include <stdio.h>

int gcd_r(int M, int N);

int main(void)
{
    int M, N;
    printf("Enter two integers: ");
    scanf("%d %d", &M, &N);
    printf("Greatest common divisor: %d\n", gcd_r(M, N));

    return 0;
}

int gcd_r(int M, int N)
{
    if (M < N) return gcd_r(N, M);

    int m = M, n = N, r = 1;
    while (r != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}