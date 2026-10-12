#include <stdio.h>

int main(void)
{
    int arr[5];
    FILE *filePtr = fopen("numbers.txt", "w");

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    if (filePtr == NULL) {
        puts("An error occurred.");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(filePtr, "%d\n", arr[i]);
    }

    puts("Data has been saved to numbers.txt.");

    return 0;
}
