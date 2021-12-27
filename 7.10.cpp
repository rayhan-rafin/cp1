#include<stdio.h>
int test (int a)
{
    a = 100;
    return a;
}
int main()
{
    int a =1;
    printf ("%d\n",a);
    test(a);                 // if a = test(a);then gives the value 100;
    printf ("%d",a);
    return 0;
}

