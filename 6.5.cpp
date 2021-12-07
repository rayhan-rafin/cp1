#include<stdio.h>
int main()
{
    int a[4]={5,10,15,20};
    a[0]=50;
    a[2]=200;
    a[3]=300;
    printf ("%d, %d ,%d ,%d", a[0],a[1],a[2],a[3]);
    return 0;
}
