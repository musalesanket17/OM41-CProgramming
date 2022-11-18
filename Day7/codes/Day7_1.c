#include<stdio.h>
int main()
{
    //printf("%d ",10 & 5); // Bitwise AND 
    //printf("%d ",10 | 5); // Bitwise OR
    //printf("%d ",10 ^ 5); // Bitwise XOR   
    
    // Bitwise NOT ~
    printf("%d ",~10); // -( n + 1 ) => -( 10 + 1)=> -11 
    /*
            Bitwise NOT 
            10 

            0000 1010 
       ~ ( invert the  bits) 
            1111 0101 ( o / p )

                2s Compliment 
            0000 1010 => 1s Compliment 
                    1
            ----------
            0000 1011 => 11  => -11           


    */  
    return 0;
}