#include <stdio.h>
int main ()
{
    int a=1,b=5;
    for ( ; ; ){
        if ( a <= 10){
            printf ("%d X %d = %d\n",b,a,b*a);
            a++;
        }
        else{
            break;
        }
    }
    return 0;
}
