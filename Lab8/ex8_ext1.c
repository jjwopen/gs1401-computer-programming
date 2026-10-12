#include <stdio.h>

int findMax(int a[4][3], int rows, int cols);

double averageMatrix(int a[4][3], int rows, int cols);

int main(void)
{
    int arr[4][3];

    printf("Enter 12 integers:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Max value: %d\n", findMax(arr, 4, 3));
    printf("Average: %.2f\n", averageMatrix(arr, 4, 3));

    return 0;
}

int findMax(int a[4][3], int rows, int cols)
{
    int max = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (max < a[i][j]) max = a[i][j];
        }
    }

    return max;
}

double averageMatrix(int a[4][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += a[i][j];
        }
    }

    return (double) sum / (rows * cols);
}
