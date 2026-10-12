#include <stdio.h>

int main(void)
{
    int a, b, m;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter a menu number: ");
    scanf("%d", &m);

    switch (m) {
        case 1:
            printf("%d\n", a + b);
            break;
        case 2:
            printf("%d\n", a - b);
            break;
        case 3:
            printf("%d\n", a * b);
            break;
        case 4:
            if (b == 0) {
                printf("Cannot divide by zero\n");
            } else {
                printf("%d\n", a / b);
            }
            break;
        default:
            printf("Invalid input\n");
            break;
    }
    return 0;
}

