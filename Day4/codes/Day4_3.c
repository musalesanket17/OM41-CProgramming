#include<stdio.h> 
#include<limits.h> 

int main( )
{
    /*
            type modifiers 
            signed ( -ve , +ve )
            unsigned ( +ve )
            short 
            long 
    */

    signed int num = -2147483648; 
    //by default it is considered as signed  
    // binary of 10 is getting stored inside 4 byte ( 32 bit)
    // num is allocated 4 bytes 
     printf("%d",num); // 10
    //printf("%d\n",INT_MAX); 
      //printf("%d",INT_MIN);   
      
    /*
            int ==> 4 bytes 
            32 bits 
            1 bit ==> sign 
            ( 2 to the power 32 - 1 ) - 1 
            ( 2 to the power 31 ) - 1 
            2,147,483,648 - 1 
             2147483647  ==> max range 
             -2147483648 ==> min range 

    */ 
    return 0; 
}
/*
    -65 
    Number system 
    Binary 
    octal 
    hexadecimal 

    1s Compliment 
    2s Compliment 

    Binary addition 

*/