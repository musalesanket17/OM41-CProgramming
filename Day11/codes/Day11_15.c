#include<stdio.h> 
int num = 10; // data section 
int main( )
{
    //int num = 100; // stack section 
    {
        //int num  = 1000;
        printf("num = %d",num); 
    }
}