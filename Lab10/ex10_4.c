#include <stdio.h>

struct Student {
    char name[100];
    int age;
};

int main(void)
{
    struct Student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf(
        "\n--- Student Info ---\n"
        "Name: %s\n"
        "Age: %d\n",
        student.name, student.age
        );

    return 0;
}