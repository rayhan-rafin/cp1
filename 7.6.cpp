#include <stdio.h>

int test (int x, int y)  //input is assigned to x,y ; output is returned/assigned to test
{
    x=10;
    y=20;
    return (x * y);
}
int main()
{
    int a=50;
    int b=100;
    int c = test(a,b); // inputs are a,b ; go to function test;
    printf ("%d\t%d\t%d",a,b,c); //variables are local and used only that particular function;
    return 0;
}
