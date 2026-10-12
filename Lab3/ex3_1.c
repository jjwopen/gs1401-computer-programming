#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter the number of donut: ");
    scanf("%d", &num);

    int remainder = num;

    int large = remainder / 40;
    remainder = remainder % 40;

    int medium = remainder / 20;
    remainder = remainder % 20;

    int small = remainder / 10;
    remainder = remainder % 10;

    if (large) {
        printf("%d large box, ", large);
    }

    if (medium) {
        printf("%d medium box, ", medium);
    }

    if (small) {
        printf("%d small box, ", small);
    }

    printf("%d individual donut\n", remainder);

    int price = 16000 * large + 8500 * medium + 4500 * small + 500 * remainder;
    printf("Total price = %d KRW\n", price);

    return 0;
}

