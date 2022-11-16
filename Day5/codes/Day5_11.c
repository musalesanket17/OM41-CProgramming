#include<stdio.h>

int main( )
{
    // sizeof is an operator 
    // sizeof operator is evaluated at compile time 

    int num; 
    char ch; 
    double d1; 
    short int s1; 
    int x = 10; 
    //printf("%d ",sizeof(1 + 2)); //4  
    //printf("%d ",sizeof(num + ch)); //4 
    //printf("%d ",sizeof(10.33 + 'A')); // 8 
    //printf("%d ",sizeof(10.33f + 'A')); // 4
    //printf("%d ",sizeof(s1 + ch)); // 4 

    printf("%d ",sizeof(x + 1)); // 4  
    printf("%d ",x); // 10  


    return 0; 
}
// sizeof(10) + sizeof(20); 
//   4        +    4 
//       8   
// char ch 
// sizeof(ch);// 1 
// sizeof('a'); 
// sizeof(97); // 4  

//sizeof(ch) + sizeof(24)
//  5 