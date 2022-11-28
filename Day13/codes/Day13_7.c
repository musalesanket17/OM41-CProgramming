#include <stdio.h>

void sumpro(int *a, int *b, int *ps, int *pp)
{

    *ps = *a + *b;
    /*
            valueat(ps) = valueat(a) + valueat(b)
                          valueat(100) + valueat(200)
                          12           +   4 
            valueat(300) => 16 
                address of s                  
        */
    *pp = *a * *b;
    /*
                valueat(a) + valueat(b)
                valueat(100) + valueat(200)
                  12         *   4
        valueat(pp)
        valueat(400) ==> 48 
         address of p 

        */
}
int main()
{
    int x = 12, y = 4, s, p;
    sumpro(&x, &y, &s, &p);
    printf("%d %d", s, p);
    return 0;
}
