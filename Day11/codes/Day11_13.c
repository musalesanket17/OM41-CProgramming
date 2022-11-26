#include<stdio.h> 
void sumpro( int a, int b ); 
extern int ps,pp; // Declaration 
int main( )
{
    int c; 
    int a = 10 , b = 4; // local variable 
   
    sumpro(a,b); // call 
    printf("\n sum = %d prod = %d",ps,pp);  
   return 0; 
}

void sumpro( int a, int b )
{
    ps = a + b; // 14
    pp = a * b; // 40 
}
int ps,pp;  // Global variable => defination 
