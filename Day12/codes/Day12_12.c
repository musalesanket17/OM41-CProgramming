#include<stdio.h> 

int main( )
{
    int *ptr; 
    char *cptr;
    float *fptr; 
    double *dptr;   
    /*
            32 bit compiler => 4 bytes 
            64 bit compiler => 8 bytes 
    */
     printf("%d ",sizeof(ptr)) ;
     printf("%d ",sizeof(cptr)) ; 
     printf("%d ",sizeof(fptr)) ;
     printf("%d ",sizeof(dptr)) ;

    return 0; 
}