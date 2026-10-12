#include <stdio.h>
#define SIZE 10

int main(void)
{
    int arr[SIZE];
    int start, end;

    printf("Please enter 10 numbers : ");

    for (int i=0; i<SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the starting and ending position ( 1 - 10 ) to copy : ");
    scanf("%d %d", &start, &end);

    for (int i=0; i<SIZE; i++) {
       if (start+i-1 < end) {
           printf("%d ", arr[start+i-1]);
       } else {
           printf("0 ");
       }
    }

    puts("");

    return 0;
}
