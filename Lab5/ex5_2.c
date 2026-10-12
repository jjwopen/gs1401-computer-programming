#include <stdio.h>

int isLeapYear(int year);

int main(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Output: ");
    isLeapYear(year) ? printf("Leap Year\n") : printf("Not Leap Year\n");

    return 0;
}

int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
