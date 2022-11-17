#include<stdio.h> 

int main( )
{
    int a = 1; 
    int ans; 

    //ans = ++a,++a,++a;
    ans = a++,a++,a++;
    printf("a = %d ans = %d",a,ans);  
    return 0; 
}
/*
    int num = 1; 
    num++;  // num = num + 1; 
    printf("%d",num); //2 
*/