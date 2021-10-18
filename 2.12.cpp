#include<stdio.h>

int main()

{
    char a,b,c;

    printf ("shorten your name to 3 letter \nEnter the first letter :");
    scanf("%c",&a);
    getchar();

    printf ("Enter the second letter :");
    scanf("%c",&b);
    getchar();


    printf ("Enter the third letter :");
    scanf ("%c",&c);
    getchar();

    printf ("Your shortened name is %c%c%c", a, b, c);

    return 0;
}
