#include <stdio.h>

int main()
{
    const int num = 10;
    const int num2 = 20;
    const int *const ptr = &num;
    //const int const * const ptr = &num;
    //ptr is a constant pointer pointing to a constant int variable

    printf("num = %d", num);   // 10
    printf("*ptr = %d", *ptr); // 10

    //*ptr = 20; // NOT OK

    // ptr = &num2; // NOT OK

    return 0;
}