#include <stdio.h>
int main()
{
    int a;
    a=1;

    while(a<=100)
    {
        printf ("%d\n",a);
        a++;

        if (a>10)
        {
            break;
        }
    }
    return 0;
}
