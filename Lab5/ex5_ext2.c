#include <stdio.h>

int getMiddle(int a, int b, int c);

int main(void)
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Input: %d %d %d\n", a, b, c);

    printf("The middle value is %d\n", getMiddle(a, b ,c));

    return 0;
}

int getMiddle(int a, int b, int c)
{
    if (a >= b && a >= c) {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    } else if (a < b && a < c) {
        if (b >= c) {
            return c;
        } else {
            return b;
        }
    } else {
        return a;
    }

}
