#include<stdio.h> 

int main( )
{
    int num1 = 10; 
    int num2 = 20; 
    int *ptr1 = &num1; 
    int *ptr2 = &num2;
    int result; 

    //  result = ptr1 + ptr2; // NOT OK  
    //  result = ptr1 * ptr2; // NOT OK 
    //  result = ptr1 / ptr2; // NOT OK
    //  result = ptr1 % ptr2; // NOT OK  
    //result = ptr1 - ptr2; //  OK  

    //result = *ptr1 + *ptr2; //  OK
    //        10    + 20 => 30     
    //printf("result = %d",result);   
    //ptr1++; // ptr = ptr + 1; 
    //ptr1--; // ptr = ptr - 1 
    
    //  ptr1 =  ptr1 *2; // NOT OK  
    //  ptr1 = ptr1 % 2; // NOT OK 
    //  ptr1 = ptr1 * 2; // NOT OK  
    //  ptr1 = ptr1 / 2; // NOT OK      
     
    
    return 0; 
}
/*
        pointer arithmatic 
        ptr + 1 , ptr + 2 
        ptr - 1 , ptr - 2


        ptr1 + ptr2 => NOT OK 
        *ptr1 + *ptr2 => OK 







*/