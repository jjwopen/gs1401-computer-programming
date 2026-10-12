#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char name[50];
	int score;
} Student;

int countAboveAverage(Student students[], int size) {
	int sum = 0;
	for (int i=0; i<size; i++) {
		sum += students[i].score;
	}

	double avg = (double) sum / size;
	int count = 0;

	for (int i=0; i<size; i++) {
		if (students[i].score >= avg) count++;
	}
	printf("%d\n", count);

	for (int i=0; i<size; i++) {
		if (students[i].score >= avg) printf("%s %d\n", students[i].name, students[i].score);
	}

	return 0;
}

int findTopStudent(Student students[], int size) {
	int idx = 0;

	for (int i=1; i<size; i++) {
		if (students[idx].score < students[i].score) idx = i;
	}

	return idx;
}

int main() {
	int size;
	printf("Enter the number of students: ");
	scanf("%d", &size);

	Student *students = (Student*)malloc(sizeof(Student)*size);

	for (int i=0; i<size; i++) {
		scanf("%s %d", (students+i)->name, &((students+i)->score));
	}

	countAboveAverage(students, size);
	int topIdx = findTopStudent(students, size);

	printf("Top Student: %s %d\n", students[topIdx].name, students[topIdx].score);

	return 0;
}
