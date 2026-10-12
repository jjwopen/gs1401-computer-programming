#include <stdio.h>

int main(void)
{
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("First index = ");
    for (int i=0; i<100; i++) {
        if (str[i] == ch) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
