#include<stdio.h> 

int main( )
{
    char ch; 
    //printf("%d\n",sizeof(10)); // 4 
    //printf("%d\n",sizeof('A')); // 4
    //            sizeof(65)
    // 'A' ==> const ==> char const ==> int
    //printf("%d\n",sizeof(ch)); // 1   
    printf("%d\n",sizeof(long double)); 
    
    //printf("%d\n",sizeof(12.33)); // 8
    //printf("%d\n",sizeof(12.33f)); // 4
    //printf("%d\n",sizeof(12.33F)); // 4 
    
    // printf("%d\n",sizeof(10l)); // long => 4  
    // printf("%d\n",sizeof(10L)); // long => 4 
    // printf("%d\n",sizeof(10ll)); // long long => 8 
    // printf("%d\n",sizeof(10LL)); // long long => 8    

    //printf("%d\n",sizeof(10u)); // unsigned => 4 
    //printf("%d\n",sizeof(10U)); // unsigned => 4 
    
    //printf("%d\n",100); // 100
    //printf("%d\n",0100); //  64 
    // octal to decimal   
    //printf("%o\n",0100); //  100  
    // octal to octal => 100 
    
    printf("%d\n",0x23); 
    // Hexadecimal ==> decimal 
    printf("%x\n",0x23); // 23  

    return 0; 
}
/*
        100 => int 
        0100 => octal  => %d ==> decimal 
        0x23 ==> hexadecimal  => %d ==> decimal


        9.00 am ==> poll session ( minimum  4 quest  ) 
*/