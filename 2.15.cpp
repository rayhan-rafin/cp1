#include <stdio.h>

int main()
{
    int a,b,cal;
    char sign;

    printf ("Take 2 number\n\nEnter the greatest number:");
    scanf("%d",&a);

    printf("Enter the other number:");
    scanf ("%d",&b);

    cal = a+b;
    sign = '+';
    printf("%d %c %d = %d\n",a,sign,b,cal);

    cal = a-b;
    sign = '-';
    printf("%d %c %d = %d\n",a,sign,b,cal);

    cal = a*b;
    sign = '*';
    printf("%d %c %d = %d\n",a,sign,b,cal);

    cal = a/b;
    sign = '/';
    printf("%d %c %d = %d\n",a,sign,b,cal);

    return 0;
}
