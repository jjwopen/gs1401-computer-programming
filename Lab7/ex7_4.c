#include <stdio.h>
#define SIZE 6

int main(void)
{
    int arr[SIZE];

    printf("Enter 6 integers: ");

    for (int i=0; i<SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<SIZE; i++) {
        printf("%d ", arr[(i+1)%SIZE]);
    }

    puts("");

    return 0;
}
