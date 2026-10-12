#include <stdio.h>

int sumArray(int arr[3][4]);

int main(void)
{
    int arr[3][4];

    printf("Enter 12 integers: ");
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Sum = %d\n", sumArray(arr));

    return 0;
}

int sumArray(int arr[3][4])
{
    int sum = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}