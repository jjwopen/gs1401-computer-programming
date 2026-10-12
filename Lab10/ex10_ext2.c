#include <stdio.h>

struct Student {
    char name[100];
    int age;
    int score;
};

void printStudent(struct Student s)
{
    printf(
        "Name: %s\n"
        "Age: %d\n"
        "Score: %d\n",
        s.name, s.age, s.score
    );
}

int main(void)
{
    struct Student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter score: ");
    scanf("%d", &student.score);

    printf("\n--- Student info ---\n");

    printStudent(student);

    return 0;
}
