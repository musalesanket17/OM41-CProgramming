#include<stdio.h> 
#include"Day18_5.h" 
#include<limits.h> 


int main( )
{
    printf("%d",INT_MAX); 
    double rad,area; 
    printf("Enter the radius"); 
    scanf("%lf",&rad); 

    area = PI * rad * rad; 
    printf("area = %.2lf",area); 
    return 0; 
}
//gcc Day18_5.c -E -o Day18_5.i 