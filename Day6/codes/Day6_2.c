#include<stdio.h> 

int main( )
{
    // short hand assignment => assignment 
    int num1 = 4; 
    // num1 = num1 + 4; 
    // num1 = num1 + 2;
    // num1 = num1 + 1; 
    // num1 = num1 - 4;
    // num1 = num1 * 4;    
    //num1+=1; // num1 = num1 + 1;  
    //num1-=1; // num1 = num1 - 1;  
    //num1*=2; // num1 = num1 * 2;  
    //num1/=2; // num1 = num1 / 2; 
      num1%=2;  // num1 = num1 % 2; 
    printf("%d",num1); // 8 
    
    return 0; 
}
/*  
        num+=1;
        num = num + 1; 

        num-=1; 
        num = num - 1; 

        num+=4;
        num = num + 4;       

        num*=1;
        num = num * 1; 
        num/=2;
        num = num / 2; 
        num%=1;
        num = num % 1;


        int num1 = 1; 
        num1 = num1 + 2; 
        num1+=2; 


        num1+=3; 
        num1 = num1 + 3; 

        num1 = +3; ( + => unary )   
        num1 = -2; ( - => unary ) 

*/