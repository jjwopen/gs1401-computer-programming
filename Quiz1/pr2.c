#include <stdio.h>

int main() {
	int n, count = 0;
	printf("Enter an integer n: ");
	scanf("%d", &n);

	for (int i=1; i<=n; i++) {
		int sum = i / 1000 + (i%1000) / 100 + (i%100)/10 + i%10;

		if (i % 3 == 0 && sum % 2 == 0) {
			printf("%d ", i);
			count++;
		}
	}

	if (count) {
		printf("\ntotal count : %d\n", count);
	} else {
		printf("0\n");
	}
}
