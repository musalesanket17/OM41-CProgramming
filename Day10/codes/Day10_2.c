#include<stdio.h>

int addition(int x , int y );// function declaration  

int main( ) // user defined functions 
{

    int num1 = 1;  // local variables 
    int num2 = 2;  // local variables 
    int res; 
    res = addition( num1 , num2 ); // function  call  
    printf("res = %d\n",res); // 3 
    res = addition( 4,4);  //  function  call  
    printf("res = %d\n",res); // 8  
    return 0; 
}
//               4       4 
int addition(int x , int y ) // function defination 
{
    int z; 
    z = x + y;  // 4 + 4 
    return z;  // 8
}
