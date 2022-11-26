#include<stdio.h> 
void sumpro( int a, int b ); 
int ps,pp;  // Global variable 
/*
        var declared inside the function => local variable 
        var declared outside the function => global variable 
*/
/*
        Global var => can be accessed throughout the program 
         
         //created when program is started 
                //even before main is called 
         //created on datasection 

        // destroyed when program is terminated 
                //after the completion of main( )         

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
