#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int age;
};

int main(void)
{
    struct Student *studentPtr = (struct Student*) malloc(sizeof(struct Student));

    printf("Enter name: ");
    scanf("%s", studentPtr->name);
    printf("Enter age: ");
    scanf("%d", &studentPtr->age);

    puts("");
    puts("Student Information");

    printf("Name: %s\n", studentPtr->name);
    printf("Age: %d\n", studentPtr->age);

    free(studentPtr);

    return 0;
}
