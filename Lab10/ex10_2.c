#include <stdio.h>

void stringCopy(char* dest, char* src)
{
    for (int i=0; i<100; i++) {
        *(dest+i) = *(src+i);
        if (*(dest+i) == '\0') break;
    }
}

int main(void)
{
    char src[100];
    char dest[100];

    printf("Enter a string: ");
    scanf("%s", src);

    stringCopy(dest, src);

    printf("%s\n", dest);

    return 0;
}