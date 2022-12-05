#include<stdio.h> 
int* fun( void ); 
int main( )
{
    int *ptr; 
    ptr = fun( ); 
    printf("%d",*ptr); 
    return 0; 
}
int* fun( void )
{
    int num = 10;
    //static int num = 10; 
    return &num;  
    
}