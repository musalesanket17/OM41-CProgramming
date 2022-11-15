#include<stdio.h> 
#include<limits.h> 
int main( )
{
    //unsigned int num = 4294967295 ; 
      unsigned int num = -1; 
    // signed int ==> %d 
    // unsigned int ==> %u 
    /*
            unsigned int => 4 byte => 32 bits 
            ( 2 to the power 32) - 1  
             4294967295 => max range 

    */
     printf("%u",num); 
   // printf("%u ",num); 
    
    //printf("%u ",UINT_MAX); 
    
    return 0; 
}