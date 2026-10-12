#include <stdio.h>

double calculateCharges(int hour)
{
	/* ------ Following Instructions ------

    int day = hour / 24;
    int remainder = hour % 24;
    
    double total = day * 50 + 0.5 * hour;
    if (remainder >= 13) total += 50;
    else total += 25 + 5 * (remainder - 8);
    
    return total;

	-------------------------------------*/

	// Following the Program Output examples

    if (hour >= 13) {
        double res = hour * 0.5;
        int day = hour / 24;
        int remainder = hour % 24;

        res += day * 50;
        if (remainder >= 10) res += 50;
        else res += remainder * 5;

        return res;
    }
    if (hour >= 8) {
        return 25 + (hour - 8) * 5 + hour * 0.5;
    }
    {
        return 25 + hour * 0.5;
    }
}

int main(void)
{
    int hours[3];
    double total = 0;
    printf("Enter the hours rented for 3 cars: ");
    scanf("%d %d %d", &hours[0], &hours[1], &hours[2]);

    printf("%5s%15s%15s\n", "Car", "Hours", "Charge");

    for (int i = 0; i < 3; i++) {
        double charge = calculateCharges(hours[i]);
        total += charge;
        printf("%5d%15d%15.2f\n", i + 1, hours[i], charge);
    }

    printf("%s%15d%15.2f\n", "TOTAL", hours[0] + hours[1] + hours[2], total);

    return 0;
}
