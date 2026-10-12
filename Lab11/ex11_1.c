#include <stdio.h>

struct Student {
    char name[30];
    int id;
    int score;
};

void printStudent(struct Student *s)
{
    puts("--- Student Information ---");

    printf("Name: %s\n", s->name);
    printf("Student ID: %d\n", s->id);
    printf("Score: %d\n", s->score);
}

int main(void)
{
    struct Student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter student ID: ");
    scanf("%d", &student.id);

    printf("Enter score: ");
    scanf("%d", &student.score);

    puts("");
    printStudent(&student);

    return 0;
}
