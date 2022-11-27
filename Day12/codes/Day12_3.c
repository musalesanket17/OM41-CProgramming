#include<stdio.h> 
//register int x ; // NOT OK 
int main( )
{
    //register 
    register int i; // Garbage
    // storage => cpu register (fast accessible )
    printf("\n%d ",i); // Garbage
    {
        register int i = 100; 
        printf("\n%d ",i); // 100 
    }
    int x; // local variable => stack => process => RAM 
    //printf("%u ",&x); // OK 
    //printf("%u ",&i); // NOT OK 
    
    // int a = 10; 
    // register int *ptr = &a; 

    //register int y = 20;
    //int *ptr = &y; // NOT OK 

    // register int y = 30; 
    // register int *p = &y;  // NOT OK 

    //register a = 10;   //type defaults to 'int

      register a = 'A';   //type defaults to 'int
    
    return 0;
}
//register static int a = 20; 