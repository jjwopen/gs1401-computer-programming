#include <stdio.h>
#define SIZE 10

int main(void)
{
    int arr[SIZE];
    int sum = 0;

    printf("Enter 10 integers: ");

    for (int i=0; i<SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<SIZE; i++) {
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float) sum / SIZE);


    return 0;
}
