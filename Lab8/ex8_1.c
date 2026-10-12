#include <stdio.h>

int main(void)
{
    int arr[3][4];

    printf("Enter 12 integers: ");

    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            sum += arr[i][j];
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}