#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    if (x * y == 0) {
        printf("It is on the axis\n");
    } else if (x > 0) {
        if (y > 0) {
            printf("1st Quadrant\n");
        } else {
            printf("4th Quadrant\n");
        }
    } else {
        if (y > 0) {
            printf("2nd Quadrant\n");
        } else {
            printf("3rd Quadrant\n");
        }
    }

    return 0;
}
