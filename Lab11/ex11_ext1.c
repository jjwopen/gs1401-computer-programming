#include <stdio.h>

int main(void)
{
    FILE *filePtr = fopen("data.txt", "r");
    int temp = 0, sum = 0;

    if (filePtr == NULL) {
        puts("File could not be opened.");
        return 1;
    }

    while (!feof(filePtr)) {
        if (fscanf(filePtr, "%d", &temp) == 1) {
            sum += temp;
        }
    }

    printf("Sum: %d\n", sum);

    fclose(filePtr);

    return 0;
}
