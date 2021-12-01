#include <stdio.h>
int main ()
{
    int a = 5,b=5,c;
    for (c=1;c<=10;c++){
            printf ( "%d X %d = %d\n",a,c,b);
            b= b+5;
    }
    return 0;
}
