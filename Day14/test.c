#include <stdio.h>

int main()
{

    const int a = 6;
    int *const ptr = &a;
    *ptr =a*a;
    printf("a = %d ptr = %d ", a, ++*ptr);
    printf("a = %d ptr = %d ", a, --*ptr);

    return 0;
}
