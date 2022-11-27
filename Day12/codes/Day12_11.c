#include<stdio.h> 

int main( )
{
    int num = 10; 
    int num2 =20; 
    int *ptr = &num; 
    printf("num = %d\n",num); // 10 
    printf("*ptr = %d\n",*ptr); // 10 
    
    ptr = &num2; 
    printf("*ptr = %d\n",*ptr); // 20  
    /*
            *ptr 
            valueat(ptr)
            valueat(200)
            20 
    */
    return 0; 
}