#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num;
    int **pptr = &ptr ;  // pointer to pointer 
    
    printf("&num = %u",&num); // 100 
    printf("ptr = %u",ptr); // 100 
    printf("*pptr = %u",*pptr);// 100 
    // *pptr => valueat(pptr)=>valueat(500) => 100  
    return 0; 
}