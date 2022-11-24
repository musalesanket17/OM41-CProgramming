#include<stdio.h>

int addition(int x , int y );// function declaration  
//main => OS 
int main( ) // user defined functions 
{
 //variables declared inside the function are called as local variables    
    int num1 = 1;  // local variables 
    int num2 = 2;  // local variables 
    int res; 
    res = addition( num1 , num2 ); // function  call  
    // num1 and num2 are called as actual argument 
    printf("res = %d",res); // 3 
    return 0; 
}
// main => calling function 
// addition => called function 
// x and y ==> formal argument 
int addition(int x , int y ) // function defination 
{
    // x and y are local variables 
    int z; // local variable 
    z = x + y; // 1 + 2 ==> 3 
    return z;  
}
// int => return type 



// main => user-defined function 
// addition => user defined function 