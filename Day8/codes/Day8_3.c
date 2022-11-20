#include<stdio.h> 

// print number of days in given month 

int main( )
{
    int month; 
    printf("Enter the month"); 
    scanf("%d",&month); //3

    switch( month )
    {
        case 1: 
        printf("Jan has 31 days"); 
        break; 

        case 2: 
        printf("Feb has 28/29 days"); 
        break;

        case 3: 
        printf("March has 31 days"); 
        break;    
    }
    return 0; 
}