#include<stdio.h> 

int main( )
{
    int num1 = 1000; 
    int num2 = 4000; 
    int num3 = 5000; 

    if(num1>num2) // if(1000>4000)
    {
           if(num1 > num3)  
           {
                printf("num1 is greatest"); 
           }
           else 
           {
               printf("num3 is greatest"); 
           }
    }
    else 
    {
        if(num2 > num3) // if(4000>5000)
        {
            printf("num2 is greatest"); 
        }
        else 
        {
            printf("num3 is greatest"); 
        }
    }

    return 0; 
}

/*  
    //nested if-else 
        if(condition)
        {
            if(condition)
            {

            }
            else 
            {

            }
        }
        else 
        {
            if(condition)
            {

            }
            else 
            {

            }
        }

*/