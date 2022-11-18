#include <stdio.h>

/*
    I/P a char 
    char => uppercase,lowercase,digit,special 

    A-Z => 65 - 90 ( A - Z )
    a-z => 97 - 122 ( lower case)
    0-9 => 48 - 57 ( digit )
*/
int main()
{
    char ch;
    printf("Enter the character");
    //scanf("%c",&ch);
    ch = getchar(); //0

    //  48>=97 && XXX
    if (ch >= 97 && ch <= 122)
    {
        printf("Lower case");
    }
    else
    {
        // 48>=65 && XXX
        if (ch >= 65 && ch <= 90)
        {
            printf("Upper case");
        }
        else
        {
            // 48>=48 && 48<=57
            if (ch >= 48 && ch <= 57)
            {
                printf("Digit");
            }
            else
            {
                printf("special symbol");
            }
        }
    }
    return 0;
}
// putchar(); => print the char 