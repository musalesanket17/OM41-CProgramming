#include<stdio.h> 

#define SWAP(a,b,type) { type t = a ; a = b ; b = t ; }

int main( )
{
    float a ,b; 
    a = 10.2; 
    b = 20.2; 
    SWAP(a,b,float);   
    printf("%.2f %.2f",a,b); 
    return 0; 
}
// { 
//      float t = a ; 
//      a = b ; 
//      b = t ; 
// };