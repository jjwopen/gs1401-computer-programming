#include <stdio.h>
#define SIZE 10

int sum(int arr[], int n)
{
    if (n == 1) {
        return arr[0];
    }
    return arr[n-1] + sum(arr, n-1);
}

int main(void)
{
    int size;
    int arr[SIZE];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > SIZE) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter %d integers: ", size);
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", sum(arr, size));

    return 0;
}