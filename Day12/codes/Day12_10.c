#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; 
    printf("num = %d",num); // 10 

    printf("*ptr = %d",*ptr); // 10 
    // *ptr => valueat(ptr) => valueat(100) => 10 

    *ptr = 20; 
     /*
            valueat(ptr) 
            valueat(100)
                => 20 
     */   
     printf("\nnum = %d",num); // 20 

    printf("\n*ptr = %d",*ptr); // 20 
    
    *ptr = 30; 
    printf("\nnum = %d",num); // 30 

    printf("\n*ptr = %d",*ptr); //30 
    

    return 0; 
}