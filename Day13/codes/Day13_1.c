#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num;
    int **pptr = &ptr ;  // pointer to pointer 
//pptr is a pointer which will hold address of pointer to int 
//pptr is a pointer which will hold address of integer pointer
    
    printf("num = %d\n",num); //10 
    printf("&num = %u\n",&num); // 100 
    printf("ptr = %u\n",ptr);// 100 
    printf("&ptr = %u\n",&ptr); // 500 
    printf("pptr = %u\n",pptr); //500 
    printf("&pptr = %u\n",&pptr); // 700 
    
    return 0; 
}