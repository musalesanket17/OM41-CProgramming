#include<stdio.h> 

int main( )
{
     int num = 10; // variable declaration + initialization  
     printf("%d\n",num); // 10 
     num = 12;   //Assignment 
     printf("%d\n",num); // 12  
     num = 13; 
     num = 14; 
     num = -1;
     num =2.2;    
     printf("%d\n",num); // 2  
    return 0; 
}
/*
        initialization can be done only once 

        int num1 = 10; 
        int num1 = 10; // ERROR 

        Assignment can be done multiple number of times 
        int num1 = 10; 
        num1 = 20; // OK 

        int num1 = 10; 
        int num2 = 20;

        int num1= 10, num2 = 20; // OK  
        int num1 =10 , double num2 = 20.3; // NOT OK 
        int num1 =10 ;  double num2 = 20.3; //  OK 

        int num1; // variable declaration 
        int num1 = 10; // variable declaration + init 
        num1 = 20; // Assignment  

*/