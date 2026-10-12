#include <stdio.h>
#define SIZE 10

int main(void)
{
    int arr[SIZE];

    printf("Enter 10 integers: ");

    for (int i=0; i<SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i=1; i<SIZE; i++) {
        if (max < arr[i]) max = arr[i];
    }

    printf("Maximum: %d\n", max);

    return 0;
}
