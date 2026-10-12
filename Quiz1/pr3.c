#include <stdio.h>

double average(int a, int b, int c);
int range(int a, int b, int c);

int main() {
	int a, b, c;

	printf("Enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);

	double avg = average(a, b, c);
	
	printf("Average = %.2f\n", avg);
	printf("Range = %d\n", range(a, b, c));

	if (avg >= 80.0) {
		printf("GOOD\n");
	} else {
		printf("NEEDS IMPROVEMENT\n");
	}
}

double average(int a, int b, int c) {
	return (a+b+c)/3.0;
}

int range(int a, int b, int c) {
	int min = a, max = a;
	if (b < a) min = b;
	if (c < b) min = c;

	if (b > a) max = b;
	if (c > b) max = c;

	return max - min;

}
