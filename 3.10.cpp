#include <stdio.h>

int main()

{
    char ch;
    scanf(" %c",&ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is lower case\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is upper case\n");
    }

    return 0;

}

