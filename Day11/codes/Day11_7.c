#include<stdio.h> 
void fun( int num); 
int main( )
{
    int num = 10; 
    
    //fun(num); 
    //fun(++num); 
    fun(num++); 
    printf("\nInside the main function num = %d",num); //11  
    return 0; 
}
void fun( int num)
{
    printf("\nInside the fun function num = %d",num); //10
}