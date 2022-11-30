#include <stdio.h>
int main(void)
{
    int a[5] = {45, 1, 7, 10, 35};
    int x, y, z;
    x = ++a[1]; //2       x=3
    y = a[1]++; // 2
    z = a[x++]; // 7 x++  x=3
    printf("%d %d  ", x,z);
    return 0;
}