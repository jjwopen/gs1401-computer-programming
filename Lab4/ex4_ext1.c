#include <stdio.h>

int main(void)
{
    int ch, count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case 'a':
            case 'A':
                count_a++;
                break;
            case 'e':
            case 'E':
                count_e++;
                break;
            case 'i':
            case 'I':
                count_i++;
                break;
            case 'o':
            case 'O':
                count_o++;
                break;
            case 'u':
            case 'U':
                count_u++;
                break;
            default:
                break;
        }
    }

    printf("The number of \'a\' or \'A\' is %d,\n", count_a);
    printf("The number of \'e\' or \'E\' is %d,\n", count_e);
    printf("The number of \'i\' or \'I\' is %d,\n", count_i);
    printf("The number of \'o\' or \'O\' is %d,\n", count_o);
    printf("The number of \'u\' or \'U\' is %d\n", count_u);

    return 0;
}
