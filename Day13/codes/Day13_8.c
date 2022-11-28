#include<stdio.h>

void fun( int *p)
{
        printf("Inside the fun *p = %d\n",*p); // 10 
        /*
            valueat(p)
            valueat(100)
            10 
        */
        *p  = *p + 1; 
        /*
            *p => 10 
            10 => 11 
        */
}

int main( )
{
    int num = 10; 
    printf("Before update %d\n",num); // 10 
    fun( &num ); 
    printf("After update %d\n",num); //  11    
    return 0; 
}