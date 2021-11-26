#include <stdio.h>
int main()
{
    int a,b;
    a=5;b=1;
    while (b < 11)
    {
        printf ("%dx%d = %d\n",a,b,a*b);
        b++;
    }
    return 0;
}
