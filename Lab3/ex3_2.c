#include <stdio.h>

int main(void)
{
    int h, w, n;

    printf("Enter H, W, and N : ");
    scanf("%d %d %d", &h, &w, &n);

    int index = (n-1) / h + 1;
    int floor = (n-1) % h + 1;

    if (index > w) {
        printf("Error: N is bigger than the number of rooms.\n");
        return 0;
    }

    int room = floor * 100 + index;

    printf("N : %d ---------> Student's room number : %d", n, room);

    return 0;
}
