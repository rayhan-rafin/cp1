#include <stdio.h>

int main()

{
    int a,b;

    printf("Take 2 number\n\n");

    printf("Enter the greatest number:");
    scanf("%d",&a);

    printf("Enter the other number:");
    scanf("%d",&b);

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a ,b ,a/b);

    return 0;
}
