#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y;
     printf ("enter a1 =");
     scanf ("%lf",&a1);

     printf ("enter b1 =");
     scanf ("%lf",&b1);

     printf ("enter c1 =");
     scanf ("%lf",&c2);

     printf ("enter a2 =");
     scanf ("%lf",&a2);

     printf ("enter b2 =");
     scanf ("%lf",&b2);

     printf ("enter c2 =");
     scanf ("%lf",&c2);

     x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
     y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);
     printf ("x = %0.2lf\ny = %0.2lf",x,y);
     return 0;
}
