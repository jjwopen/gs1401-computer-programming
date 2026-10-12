#include <stdio.h>

int gcd_r(int M, int N);

int main(void)
{
    int M, N;
    printf("Enter two positive integers: ");
    scanf("%d %d", &M, &N);
    printf("gcd = %d\n", gcd_r(M, N));

    return 0;
}

int gcd_r(int M, int N)
{
    if (M < N) return gcd_r(N, M);
    if (N == 0) return M;
    return gcd_r(N, M%N);
}