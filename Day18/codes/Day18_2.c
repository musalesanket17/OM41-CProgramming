#include<stdio.h> 
#include<stdlib.h> 

int main( )
{
    // calloc => void* calloc( size_t n , size_t size); 
    // Heap section 
    int *ptr; 
    ptr = (int*)calloc(3,sizeof(int)); // Request 
    if( ptr == NULL) // check if avail 
    {
        printf("mem not allocated"); 
        exit(1); 
    }
    int i; 
    for( i = 0 ; i<=2; i++)
           *(ptr + i ) = 10 * ( i + 1);
    for( i = 0 ; i<=2; i++)
         printf("%d ",ptr[i]); // *(ptr + i )  

    free(ptr); // To avoid memory leakage 
    ptr = NULL; // To avoid Dangling pointer
    return 0; 
}