#include <stdio.h>

double sum (double x, double y); // redirected to 12th line (function described) ; a,b value assigned to double x,y(can also be named first,second); test function;
int main ()
{
    double a,b,c;
    scanf ("%lf %lf",&a,&b);
    c = sum (a, b);                //redirected back to 3rd line ; takes a and b value there;
    printf ("%lf",c);
    return 0;
}
double sum (double first , double second) //executes the function ; x,y assigned to double first,second;
{
    double add = first + second;
    return add;
}
