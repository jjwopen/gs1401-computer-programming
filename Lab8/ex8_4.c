#include <stdio.h>

void doubleArray(int a[], int n);
void reverseArray(int a[], int n);

int main(void)
{
    int arr[8];

    printf("Enter 8 integers: ");
    for (int i=0; i<8; i++) {
        scanf("%d", &arr[i]);
    }

    doubleArray(arr, 8);
    reverseArray(arr, 8);

    printf("Result: ");
    for (int i=0; i<8; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void doubleArray(int a[], int n)
{
    for (int i=0; i<n; i++) {
        a[i] *= 2;
    }
}

void reverseArray(int a[], int n)
{
    for (int i=0; i<n/2; i++) {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }

}
