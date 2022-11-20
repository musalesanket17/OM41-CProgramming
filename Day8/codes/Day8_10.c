#include<stdio.h> 

int main( )
{
    // int i = 1; 
    //if(i==1)
     //continue; //continue statement not within a loop
    
    int i; 

    for( i = 2; i<=10 ; i++)
    {
        if(i%2 == 0)
         continue;
        printf("%d",i); // 3 5 7 9    
    }
    
    
    return 0; 
}