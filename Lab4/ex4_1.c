#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an odd number for the diamond size ( 1-19 ):");
    scanf("%d", &n);

    for (int i=1; i <= n; i+=2) {
        int blank = (n - i) / 2;
        for (int j=0; j<blank; j++) {
            printf(" ");
        }
        for (int j=0; j<i; j++) {
            printf("*");
        }
        for (int j=0; j<blank; j++) {
            printf(" ");
        }
        printf("\n");
    }

    for (int i=n-2; i >= 1; i-=2) {
        int blank = (n - i) / 2;
        for (int j=0; j<blank; j++) {
            printf(" ");
        }
        for (int j=0; j<i; j++) {
            printf("*");
        }
        for (int j=0; j<blank; j++) {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}