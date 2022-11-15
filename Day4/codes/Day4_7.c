#include<stdio.h> 
#include<limits.h> 

int main( )
{
    // short , long 
    //short int num = 32767;  // signed short int num; 
    //printf("%d",sizeof(num)); // 2 bytes 
    //printf("%hd",num); 
    /*
            signed short 
            2 byte 
            16 bits 
            ( 2 to the power 16 - 1 ) - 1 
            ( 2 to the power 15 ) - 1
              32768 - 1
              32767 ==> max range 
              -32768 ==> min range   

    */
    //unsigned short int num;
    //printf("%u",USHRT_MAX); //65535 
    
    //long 
    //long int num1 = 100; // signed long int num; 
      //long num1 = 100; 
    // unsigned long int num;  
     // printf("%ld",num1);

    //long long int num2;  // signed 
    // unsigned long long int num2; 
     //printf("%d",sizeof(num2)); // 8 bytes ==> 64 bits 

    return 0; 
}
/*  
    0000 1010 
        10
     int num;  // 4 
     unsigned int num; // 4 
     short int num; // 2 
     unsigned short int num;// 2  
     long int num; // 4 
     unsigned long int num; // 4  
     long long int num; // 8 
     unsigned long long int num; // 8      




*/