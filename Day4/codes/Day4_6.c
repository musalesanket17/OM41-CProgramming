#include<stdio.h> 
#include<limits.h> 

int main( )
{
    char ch = 128; // +ve and -ve
    // unsigned char ch = 255; // OK ( 0 to 255 ) 
    // by default it is considered as signed  
    //printf("%d ",SCHAR_MAX); // max  => 127 
    //printf("%d ",SCHAR_MIN); // min  => -128 
    
    printf("%d",ch); // -128  
    /*
            char ==> 1 byte 
            1 byte ==> 8 bits 
            ( 2 to the power 8 - 1 ) - 1
            ( 2 to the power 7 ) - 1
            128 - 1 
            127 ==> max range 
            -128 ==> min range  

            unsigned char 
            1 byte => 8 bits 
            ( 2 to the power 8  ) - 1
            256 - 1 
            255 => max range of unsigned char 
 
    */
    return 0; 
}

// -128 -127 -126 -125 ..... 0  1 2 3 4 .... 127 


