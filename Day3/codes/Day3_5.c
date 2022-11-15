#include <stdio.h>

int main()
{
    /*
    int num = 12;
    double dvar = 12.3;
    char ch = 'A';
    // sizeof() ==>  it gives size in bytes
    // size ==> 1,4,8 ( integer ) => %d
    printf("int =%d\ndvar = %d\nchar = %d",sizeof(num),sizeof(dvar),sizeof(ch));
    */

    int n, a, b, c, d;
    int sum;
    printf("Enter the value of 3 digit no:--");
    scanf("%d", &n);
    a = n / 100;
    b = n % 100;
    c = b % 10;
    d = b / 10;
    printf("first digit %d\nsecond digit %d\nthird digit %d\n", a, c, d);
    sum = a + c + d;
    printf("Sum of all digits will be %d :--", sum);
    return 0;
}
/*
    int ==> 4 byte ==> 32 bit
    double ==> 8 byte ==> 64 bit
    char ==> 1 byte ==> 8 bits

*/

