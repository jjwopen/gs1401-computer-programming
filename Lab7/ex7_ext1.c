#include <stdio.h>
#define SIZE 10

int findMax(int arr[], int n);

int main(void)
{
    int arr[SIZE];

    printf("Enter 10 integers: ");

    for (int i=0; i<SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findMax(arr, SIZE));

    return 0;
}

int findMax(int arr[], int n)
{
    int max = arr[0];

    for (int i=1; i<n; i++) {
        if (max < arr[i]) max = arr[i];
    }

    return max;
}