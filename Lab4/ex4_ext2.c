#include <stdio.h>

int main(void)
{
    int ch;
    int first = 0, second = 0;
    int level = 0;
    int operator = 0;

    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            switch (level) {
                case 0:
                    first = 10 * first + ch - '0';
                    break;
                case 1:
                    second = 10 * second + ch - '0';
                    break;
                default:
                    break;
            }
        } else {
            level = 1;
            operator = ch;
        }
    }

    switch (operator) {
        case '+':
            printf("%d\n", first + second);
            break;
        case '-':
            printf("%d\n", first - second);
            break;
        case '*':
            printf("%d\n", first * second);
            break;
        case '/':
            if (second) {
                printf("%d\n", first / second);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (second) {
                printf("%d\n", first % second);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Unsupported operator\n");
            break;
    }
    return 0;
}
