#include<stdio.h> 
#include<stdlib.h> 

int main( )
{
    // heap section 
    // void* malloc(size_t size); 
    
    float *ptr; 
    ptr  = (float*)malloc(sizeof(float)); // request 

    if(ptr == NULL) // check if avail 
    {
          printf("Memory not allocated"); 
          exit(1);   
    } 
    *ptr = 11.33;  // use  
    printf("%.2f",*ptr);
    // *ptr => valueat(ptr) => valueat(4000)=> 11.33  

    free( ptr ); // To avoid memory leakage     
    ptr = NULL; // To avoid dangling pointer 
   
   
    return 0; 
}