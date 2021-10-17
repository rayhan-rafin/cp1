#include<stdio.h>

int main()

{
    char a,b,c;
    //int x;

    printf ("shorten your name to 3 letter \nEnter the first letter :");
    scanf("%c",&a);
    //scanf("%c",&d);
    getchar();

   // printf ("Enter a number :");
    //scanf("%c",&x);

    printf ("Enter the second letter :");
    scanf("%c",&b);
    getchar();
    //scanf("%c",&d);

    printf ("Enter the third letter :");
    scanf ("%c",&c);
    //scanf ("%c",&d);
    getchar();

    printf (" Your shortened name is %c%c%c", a, b, c);

    return 0;
}
