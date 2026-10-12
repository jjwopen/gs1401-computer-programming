#include <stdio.h>

struct Student {
    char name[100];
    int score;
};

int main(void)
{
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name and score: ");
        scanf("%s %d", students[i].name, &students[i].score);
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%s : %d\n", students[i].name, students[i].score);
    }

    return 0;
}
