#include <stdio.h>

int main()

{
    int a,b;
    printf ("Enter a number: ");
    scanf ("%d",&a);

    b = a/2;
    b = b*2;

    if (a == b)
    {
        printf ("The number is even");
    }

    else
    {
        printf ("The number is odd");
    }

    return 0;
}
