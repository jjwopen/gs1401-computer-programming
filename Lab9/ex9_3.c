#include <stdio.h>
#include <stdlib.h>

int sumArray(int *arr, int size)
{
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum += *(arr+i);
    }

    return sum;
}

int main(void)
{
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int *arr = (int*) malloc(sizeof(int) * size);

    if (!arr) {
        printf("Fail to allocate memory. Terminating...\n");
        return 1;
    }

    printf("Enter %d integers: ", size);

    for (int i=0; i<size; i++) {
        scanf("%d", arr + i);
    }

    printf("\nSum = %d\n", sumArray(arr, size));

    free(arr);

    return 0;
}
