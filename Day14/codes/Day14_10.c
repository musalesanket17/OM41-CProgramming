#include<stdio.h> 

int main( )
{
    int num = 10; 
    int num2 =20; 
    int * const ptr = &num;  
//ptr is a constant pointer pointing to a non constant int variable     
    
    printf("num = %d",num); //10 
    printf("*ptr = %d",*ptr); //10 

    *ptr = 20; 
    printf("*ptr = %d",*ptr); //20 
    
    //ptr = &num2; // NOT OK 


    return 0; 
}
/*
    this pointer => constant pointer  
    reference => constant pointer 

*/
