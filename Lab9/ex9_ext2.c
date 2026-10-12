#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("enter a string: ");
    scanf("%s", str);

    size_t len = strlen(str);

    for (int i=0; i<len/2; i++) {
        if (str[i] != str[len-i-1]) {
            printf("Not palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");

    return 0;
}
