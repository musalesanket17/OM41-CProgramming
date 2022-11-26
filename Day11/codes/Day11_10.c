#include<stdio.h> 
void sumpro( int a, int b ); 
int main( )
{
    int c; 
    int a = 10 , b = 4; 
   
    sumpro(a,b); // call 
    //printf("\n sum = %d prod = %d",ps,pp);  // NOT OK  
   return 0; 
}
void sumpro( int a, int b )
{
    int ps,pp; 
    
    ps = a + b; // 14
    pp = a * b; // 40 
}