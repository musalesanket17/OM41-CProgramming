#include<stdio.h> 
void sumpro( int a, int b ); 
int ps,pp;  // Global variable 
/*
    ps and pp will allocated in data section
    scope => program 
    life => program 
    by default => 0  
*/
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
