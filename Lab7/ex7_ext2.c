#include <stdio.h>
#define SIZE 8

int countAboveAverage(double arr[], int n);

int main(void)
{
    double arr[SIZE];

    printf("Enter 8 real numbers: ");

    for (int i=0; i<SIZE; i++) {
        scanf("%lf", &arr[i]);
    }

    printf("%d\n", countAboveAverage(arr, SIZE));

    return 0;
}

int countAboveAverage(double arr[], int n)
{
    double sum = 0;

    for (int i=0; i<n; i++) {
        sum += arr[i];
    }

    double average = sum / n;

    int count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] > average) count++;
    }

    return count;
}
