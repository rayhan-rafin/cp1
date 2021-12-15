#include<stdio.h>

double sum (double first , double second)
{
    double add = first + second;     //can also use sum instead of add ;
    return add;                                 // add will be returned and be placed on sum,also type casts to the target type
}
int main ()
{
    double a,b,c;
    scanf ("%lf %lf",&a,&b);
    c = sum (a, b);
    printf ("%lf",c);
    return 0;
}
