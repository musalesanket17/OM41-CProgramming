#include<stdio.h>
int add(int a, int b); 
int main( )
{
    //Function pointer 
    //int (*ptr)(int);  
//ptr is a pointer to a function that accepts int and returns the int 

    int(*ptr1)(int,int) = add;
    //assigning using function designator 

    int(*ptr2)(int,int) = &add; 
    //assigning using address of operator

    //dereferencing => calling the function 

      (*ptr1)(20,10); //call 
        ptr2(30,40); // call  

        //array of functions pointers 
        // int (*arr[4])(int,int);   


    return 0; 
}

int add(int a, int b)
{
    printf("%d",a+b); 
}
/*

        volatile , const ( type qualifiers )

        volatile int status = 1;

        while(status == 1)
        {

        } 

        while(1)
        {

        }



*/