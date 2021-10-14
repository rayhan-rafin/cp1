#include <stdio.h>

int main ()
{
    double a,b,sum;

    printf ("enter value of a \na = ");
    scanf("%lf", &a);

    printf ("enter value of b \nb = ");
    scanf ("%lf", &b);

    sum = a+b;

    printf ("sum is %0.2lf",sum);

    return 0;

}
