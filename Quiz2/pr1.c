#include <stdio.h>
#include <stdlib.h>

int getRange(int arr[], int size) {
	int min = arr[0], max = arr[0];

	for (int i=1; i<size; i++) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}

	return max - min;
}

int main() {
	int size;
	printf("Enter the number of elements: ");
	scanf("%d", &size);

	int *arr = (int *)malloc(sizeof(int)*size);

	printf("Enter %d integers: ", size);

	for (int i=0; i<size; i++) {
		scanf("%d", arr+i);
	}

	printf("%d\n", getRange(arr, size));

	return 0;
}
