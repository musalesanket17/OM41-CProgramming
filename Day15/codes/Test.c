#include <stdio.h>
void callbyAddress1(int *x)
{
    x=x+10;
} 
void callbyAddress2(int *x)
{
   *x=*x+10;
} 
int main(void)
{
int a=10;
printf(" %d ",a); //10 
callbyAddress1(&a);
printf(" %d ",a); //10  
callbyAddress2(&a);
printf(" %d ",a); // 20 
callbyAddress1(&a);
printf(" %d ",a); // 20 
callbyAddress2(&a);
printf(" %d ",a);// 30  
return 0;
} 