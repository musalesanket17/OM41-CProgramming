#include<stdio.h> 

int sum( int a, int b)
{
     
    int c = a + b; 
    return c;  
}
int main( )
{
    int x= 10, y = 20, z; 
    z = sum( x , y); 
    printf("z= %d\n",z); 
    z = sum ( 1,2 ); 
    printf("z = %d\n",z); 
    return 0; 
}