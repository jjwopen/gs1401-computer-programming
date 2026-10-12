#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i=0; i<size; i++) {
        printf("%d ", *(arr+i));
    }
	puts("");

}

int main(void)
{
    int arr[5];

    printf("Enter 5 integers: ");

    for (int i=0; i<5; i++ ) {
        scanf("%d", arr+i);
    }

    printf("\nArray elements:\n");
    printArray(arr, 5);

    return 0;
}
