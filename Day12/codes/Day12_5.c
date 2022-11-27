#include<stdio.h> 
int myfact( int num); 
int main( )
{
    int result; 
    result = myfact(5);
    printf("res = %d",result);  
    return 0; 
}
int myfact( int num)
{
    int result; 

    if(num == 0 ) // terminating condition 
        return 1; 
    else 
        result = num * myfact ( --num); 
    return result;     
       
} 
/*
   5   5
   4   3 
   3   2 
   2 
   1   1
*/