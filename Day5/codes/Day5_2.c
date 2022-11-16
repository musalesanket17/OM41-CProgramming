#include<stdio.h> 

int main( )
{
    unsigned char ch = 500; // 0 to 255 
    /*
            char => 1 byte 
            1 byte => 8 bits 
            2 to the power 8 -> 256 

            500 - 256 => 244( yes )
    */ 
    printf("%u ",ch); 
    return 0; 
}
