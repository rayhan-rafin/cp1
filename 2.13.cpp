#include <stdio.h>

int main ()
{
    char a,b,c;

    printf("shorten your name to 3 letter\n\nEnter first letter:");
    a = getchar();
    getchar();

    printf("Enter second letter:");
    b = getchar();
    getchar();

    printf("Enter last letter:");
    c = getchar();
    getchar();

    printf ("\nYour shortened name is: %c%c%c",a,b,c);

    return 0;
}
