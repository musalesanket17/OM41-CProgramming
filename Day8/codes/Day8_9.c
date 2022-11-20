#include<stdio.h> 

int main( )
{
    // jump statments => break , continue, return , goto 

    // int i = 1; 
    // if( i == 1)
    //     break; //break statement not within loop or switch

    int i; 

    for( i = 1; i<=5 ; i++)
    {
        printf("%d",i); // 1 2 3 
        if( i == 3)
           break; 
    }
    printf("\n %d ",i); 

    return 0; 
}