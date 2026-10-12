#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber();

int main(void)
{
    srand(time(NULL));
    int count[10] = {0};

    for (int i=0; i<100; i++) {
        count[(getRandomNumber()-1)/10]++;
    }

    for (int i=0; i<10; i++) {
        printf("%d~%d: %d\n", i*10+1, (i+1)*10, count[i]);
    }

    return 0;
}

int getRandomNumber()
{
    return rand() % 100 + 1;
}
