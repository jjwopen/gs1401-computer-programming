#include <stdio.h>

int main(void)
{
    int fuel, method;
    float liter, price = 0.0;

    scanf("%d %f %d", &fuel, &liter, &method);

    switch (fuel) {
        case 0: price = 1650 * liter; break;
        case 1: price = 1500 * liter; break;
        case 2: price = 1100 * liter; break;
    }

    if (liter > 50.0) {
        price *= 0.9f;
    } else if (liter > 20.0) {
        price *= 0.95f;
    }

    if (method) price *= 0.98f;

    printf("%d\n", (int) price);



    return 0;
}
