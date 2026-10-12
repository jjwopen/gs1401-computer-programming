#include <stdio.h>
#include <math.h>

int main(void)
{
    int numbers[10][10];
    int nsqr, n, sum;

    printf("How many numbers? ");
    scanf("%d", &nsqr);

    n = (int) sqrt(nsqr);
    sum = n * (n*n + 1) / 2;

    printf("Enter the sequence of numbers: ");
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    int temp1, temp2;

    for (int i=0; i<n; i++) {
        temp1 = 0;
        temp2 = 0;
        for (int j=0; j<n; j++) {
            temp1 += numbers[i][j];
            temp2 += numbers[j][i];
        }
        if (temp1 != sum || temp2 != sum) {
            printf("This is NOT a magic square\n");
            return 0;
        }
    }

    temp1 = 0;
    temp2 = 0;
    for (int i=0; i<n; i++) {
        temp1 += numbers[i][i];
        temp2 += numbers[i][n-i-1];
    }
    if (temp1 != sum || temp2 != sum) {
        printf("This is NOT a magic square\n");
        return 0;
    }

    printf("This is a magic square\n");
    return 0;
}