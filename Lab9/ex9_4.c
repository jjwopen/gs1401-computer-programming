#include <stdio.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i=0; i<100; i++) {
        if (str[i] == '\0') {
            printf("Length = %d\n", i);
            return 0;
        }
    }

    return 0;
}
