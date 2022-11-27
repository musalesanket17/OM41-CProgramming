#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; 
    printf("num = %d",num); // 10 

    printf("*ptr = %d",*ptr); // 10 
    //* => valueat opr / dereferencing 
    
    /*
                    *ptr
                    valueat(ptr);
                    valueat(100)
                    10     
    */
    
    return 0; 
}