#include<stdio.h> 
int num2; // Global variable => program scope 
static int num = 10;  // static variable => file scope 
int main( )
{
    //static int num = 10; // function scope 
    /*
        data-section => created before main is called
        destroyed after completion of main  
    */
    printf("num = %d",num);  
}
fun( )
{
    printf("num = %d",num);  // NOT OK 
}

/*
global=> num2     
static=> num1 
        main.c    f1.c    f2.c    f3.c 
            gcc main.c f1.c f2.c f3.c 
                a.exe 
                ( make file )

        Global var ==> program 
        static => limited 

*/