/*
#include<stdio.h>
int main(void)
{
extern int value;
printf("%d ", value );
{
int value = 100;
printf("%d ", value);
}
return 0;
}
//int value = 1000;

*/

#include <stdio.h>
int fun(int n);
int main()
{

    int a = 3;
    fun(a);

    return 0;
}

int fun(int n)
{

    if (n > 0)
    {
        fun(--n);
        printf("%d", n);
        fun(--n);
    }
}