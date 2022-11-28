#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num;
    int **pptr = &ptr ;  // pointer to pointer 
    
    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); //10 
    // *ptr => valueat(ptr) => valueat(100) => 10 

    printf("**pptr = %u\n",**pptr); // 10
    /*
            **pptr 
            valueat(valueat(pptr)); 
            valueat(valueat(500))
            valueat(100)
            10 
    */  

     **pptr = 20; 
    printf("num = %d\n",num); //20 
    printf("*ptr = %d\n",*ptr); //20 
    printf("**pptr = %u\n",**pptr); // 20
    
    return 0; 
}