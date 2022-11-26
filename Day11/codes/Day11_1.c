/*
    nCr ==> n! / ( r! * ( n - r)! )

    1.Input n and r
    2.cal n!
    3.cal r!
    4.cal (n-r)!
    5.cal n! / ( r! * ( n - r)! ) 
    6.print the result    

*/

#include<stdio.h> 
int combination(int n,int r) ; 
int factorial( int n ); 
// In C function definations are global 
int main( )
{
    int n,r; // local variables 
    int res; 
    printf("Enter the n and r "); 
    scanf("%d%d",&n,&r); 
    res = combination(n,r); // function call => 5 2 
    printf("res = %d",res);  
    return 0;
}
int combination(int n,int r) // 5  2 
{    
        int nf,rf,nrf,res; 

       nf  = factorial(n); // factorial(5); 
       rf =  factorial(r); // factoral(2); 
       nrf = factorial(n - r); // factorial(3); 
       // n! / ( r! * ( n - r)! ) 
       res = nf / ( rf * nrf );       
       return res;  
}

int factorial( int n ) //3
{
    int i , result = 1; 
    for( i = 1 ; i<=n ; i++)
          result = result * i; 
    return result;    
}
// OS => main =>   combination <=>   Factorial(5) => 1st call  
//                 combination <=>   Factorial(2) => 2nd call   
//                 combination <=>   Factorial(3) => 3rd call 
//                 cal  n! / ( r! * ( n - r)! )
//       main <=   res 


// int *ptr 
// int num1; 
// char ch; 
// int arr[5]; 

// int ch; 
// char num1; 