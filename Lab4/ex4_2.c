#include <stdio.h>
#include <math.h>

double estimation (double x)
{
    return x - (exp(-x)-x) / (-exp(-x)-1);
}


int main(void)
{
    double acc;

    printf("Program to find the root of the function exp(-x) - x using the Newton-Raphson Method.\n");
    printf("Enter the accuracy (acc) : ");
    scanf("%lf", &acc);

    double xOld = -10.0;
    double xNew;
    int iter = 0;
    double accuracy;

    do {
        xNew = estimation(xOld);
        accuracy = fabs(xNew - xOld);
        printf("iteration : %2d  =>  x_old : %14.10f\tx_new : %14.10f\n", iter, xOld, xNew);
        xOld = xNew;
        iter++;
    } while (accuracy > acc);

    printf("The root of the function exp(-x) - x with accuracy %f is %f\n", acc, xNew);
    printf("Total number of iterations : %d\n", iter-1);


    return 0;
}