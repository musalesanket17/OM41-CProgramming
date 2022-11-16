#include<stdio.h> 

int main( )
{
    //char ch = 500; // signed => 127 to -128 
    /*
            127 to -128 
            char => 1 byte
            1 byte => 8 bits

            2 to the power 8 => 256 

          1.500 - 256 => 244 
          2.244 - 256 => -12      

    */
    char ch = 900; // 127 to -128 
    /*
            char => 1 byte => 8 bits 
            2 to the power 8 => 256 

            900 - 256 => 644( no )
            644 - 256 => 388 ( no )
            388 - 256 => 132 ( no )
            132 - 256 => -124 ( yes )

    */ 
    printf("%d",ch); 
    return 0; 
}