#include <stdio.h>
#include <stdlib.h>

void swapFirstLast(int* arr, int size) {
	int temp = *arr;
	*arr = *(arr+size-1);
	*(arr+size-1) = temp;
}

int main() {
	int size;
	printf("Enter the number of elements: ");
	scanf("%d", &size);

	int *arr = (int*)malloc(sizeof(int)*size);

	printf("Enter %d integers: ", size);
	for (int i=0; i<size; i++) {
		scanf("%d", arr+i);
	}

	swapFirstLast(arr, size);

	for (int i=0; i<size; i++) {
		printf("%d ", *(arr+i));
	}

	puts("");

	return 0;
}
