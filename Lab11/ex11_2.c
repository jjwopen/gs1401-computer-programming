#include <stdio.h>

struct Product {
    char name[30];
    int price;
};

int main(void)
{
    struct Product products[3];
    int max = 0, max_idx = 0;

    for (int i=0; i<3; i++) {
        printf("Enter product name and price: ");
        scanf("%s %d", products[i].name, &products[i].price);

        if (max < products[i].price) {
            max = products[i].price;
            max_idx = i;
        }
    }

    puts("");
    printf("Most Expensive Product: %s\n", products[max_idx].name);
    printf("Price: %d\n", products[max_idx].price);

    return 0;
}
