#include<stdio.h> 

int main( )
{
    // printf("Hello world"); 
    // printf("Hello world"); 
    // printf("Hello world"); 
    // printf("Hello world"); 
    // printf("Hello world"); 
    
    
    // loops => while , for , do-while 

    // // while 
    // int i; 
    // i = 1;
    // while( i<=5) // infinite loop 
    // //while( 1<=5) => while(1)
    // //while( 1<=5) => while(1)
    // //while( 1<=5) => while(1)
    // //while( 1<=5) => while(1)
    // {
    //     printf("Hello world"); 
    // } 

    
    int i; 
    i = 1;
    while( i<=5) // infinite loop 
    //while( 1<=5) => while(1)
    //while( 2<=5) => while(1)
    //while( 3<=5) => while(1)
    //while( 4<=5) => while(1)
    //while( 5<=5) => while(1)
    //while( 6<=5) => while(0)
    {
        printf("Hello world "); 
        //i = i + 1; 
         i++; 
        //++i; 
        //i+=1;   
    } 
    printf("\n outside the loop %d",i); // 6 
    return 0; 
}