#include<stdio.h>
int test (int ara [])
{
    ara[0]=100;
    return ara[0];
}
int main()
{
    int ara[]= {1,2,3,4,5};
    printf ("%d\n",ara[0]);
    test(ara);
    printf ("%d",ara[0]);
    return 0;
}
