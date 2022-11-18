#include <stdio.h>

int main()
{

    /*
        int val =10;
        float fval = 56.2121;

        // printf("%05d%*.*f" ,val,val , val-8 , fval ); // 00010     56.21

        printf("%d" , '\0');
    

    int i = 5;
    if (!printf("0"))
        i = 3;
    else
        i = 5;
    printf("%d", i);
 */
    int a, b, c;
    a = printf("\nPG-DITISS");
    b = printf("\nPG-DMC");
    c = printf("\nPG-DBDA [%d]", a) + ++b;
    printf(" %d", c);
    return 0;
}