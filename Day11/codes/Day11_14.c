#include<stdio.h> 
void fun( ); 
extern int num; 
int main( )
{
    //extern int num; 
    printf("num = %d",num); 
    fun( ); 
    return 0; 
}
void fun( )
{
    //extern int num; 
    printf("num = %d",num); 
}
int num = 10; 