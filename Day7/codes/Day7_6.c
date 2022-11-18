#include<stdio.h> 

int main( )
{
    // min of 3 numbers 
    int a,b,c; 
    printf("Enter the 3 numbers"); 
    scanf("%d%d%d",&a,&b,&c); 
    //  F  &&  XX     
    if(a<b && a<c) // if(0)
    {
        printf("min = %d",a); 
    }
    else 
    {
        if(b<c)
         printf("b = %d",b); 
        else 
         printf("c = %d",c); 
    }
    return 0; 
}
