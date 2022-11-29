#include<stdio.h> 

int main( )
{
    int num = 10; 
    int num2 = 30; 
    int *ptr = &num; 
    printf(" num = %d\n",num);// 10 
    printf(" *ptr = %d\n",*ptr); //10 

    *ptr = 20; // OK 
    printf(" num = %d\n",num);// 20 
    printf(" *ptr = %d\n",*ptr); //20 
 
    ptr = &num2; // OK  
    printf(" *ptr = %d\n",*ptr); //30 

    return 0; 
}