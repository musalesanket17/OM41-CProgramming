#include<stdio.h> 
void sumpro( int a, int b ); 
int main( )
{
    auto int d; // auto indicates local variables
    //( in function variables ) => auto => optional 
    int c; // if not init => garbage 
    int a = 10 , b = 4; // local variables 
    /*
            a,b,c,d will be created when main is called 
            on main's FAR (stack)
    */ 
    //printf("c = %d\n",c); // Garbage
   {
       int c = 10; 
       printf("c = %d\n",c); // 10 
       {
           int c = 20; 
           printf("c = %d\n",c); // 20 
           {
               int c = 30; 
               printf("c = %d\n",c); // 30 
           } 
       } 
   }
   //sumpro(a,b); // call 
   printf("\n Inside the main a = %d b = %d",a,b); // ? ? 
   return 0; 
}
//              10      4 
void sumpro( int a, int b )
{
    int ps,pp; 
    /*  
            a,b,ps,pp will be created when sumpro is called 
            on sumpro's FAR 
    */
    ps = a + b; // 14
    pp = a * b; // 40 
    printf("\n sum = %d prod = %d",ps,pp);  // 14 40 
    a++; 
    b++; 
    /*
            modifying a,b in sumpro's FAR will not affect 
            main's "a" and "b"
    */
   // a,b,ps,pp will be destroyed from the stack 
}