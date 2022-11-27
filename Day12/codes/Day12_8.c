#include<stdio.h> 

int main( )
{
    int num = 20; 
    
    int *ptr; //local pointer => Garbage 
    // ptr is a pointer to a integer 
    // * => dereference opr
    // ptr will be storing the address of int variable
    ptr = &num; //referencing opr 
    //& => reference opr , address of opr , direction opr 
    // * => dereference , indirection opr 

    printf("num = %d\n",num); // 20 
    printf("&num = %u\n",&num); // 100 
    printf("ptr = %u\n",ptr); //100 
    printf("&ptr = %u\n",&ptr); // 500 

    return 0;
}
/*
        int *ptr = 100; // NOT OK 

        double x;    
        double *p = &x; 

        int a = 10; 
        int *ptr; 
        ptr = &a; //assignment 

        int a = 10; 
        int *ptr = &a; // init  

*/