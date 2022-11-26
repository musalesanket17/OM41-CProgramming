
/*#include <stdio.h>
int num;
int function(int n)
{
    int num = 100;
    return num;
}
int main(void)
{
    printf("%d %d\n", num, function(200));
    return 0;
}
*/
#include <stdio.h>
int function(int z);
int main(void)
{
    int z = 111;
    z = z + function(z++);
    
    printf(" UP = %d\n", z);
    int c = z + function(++z);
    //  printf(" In fucntion2  = %d\n", z);
    printf("result=%d", z);
    return 0;
}
int function(int z)
{
    //  printf(" In fucntion  = %d\n", z);
    return ++z;
}