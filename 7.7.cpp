#include<stdio.h>
double pi = 3.14;
int test()
{
    pi = 3.1416;
    return pi;
}
int main ()
{
    printf ("%lf\n",pi);
    test ();
    printf ("%lf",pi);
    return 0;
}
