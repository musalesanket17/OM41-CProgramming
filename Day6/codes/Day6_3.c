#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    a += b += c += 1;
    /*
        c = c + 1 => 3 + 1 => 4
        b = b + c => 2 + 4 => 6
        a = a + b => 1 + 6 => 7
    */
    // printf(" a =%d b = %d c = %d",a,b,c); // 7 6 4

    a = b = c = -2;
    printf(" a =%d b = %d c = %d", a, b, c); // -2 -2 -2

    return 0;
}
// -2 + 1;
