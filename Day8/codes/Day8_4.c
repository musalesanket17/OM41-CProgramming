#include<stdio.h> 

/*
        A or a => Android 
        b or B => Basic 
        c or C => C programming 
        d or D => Database 
        
*/
int main( )
{
    char ch; 
    printf("Enter the character"); 
    //scanf("%c",&ch); 
    ch = getchar( ); 

    switch( ch )
    {
         case 'a': 
         case 'A': 
         printf("Android"); 
         break; 
         
         case 'b': 
         case 'B': 
         printf("Basic "); 
         break; 
         
         case 'c': 
         case 'C': 
         printf("C programming"); 
         break;    

         
         case 'd': 
         case 'D': 
         printf("Database"); 
         break; 

    } 
    return 0; 
}

  