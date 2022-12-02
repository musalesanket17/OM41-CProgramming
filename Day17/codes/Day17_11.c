#include<stdio.h> 

int main( )
{
    char names[5][10];

    /*
                [0]  [1]  [2]  .....  [9]
        [0]      A    B    C    \0 

        [1]      A    m    i     t  \0 

        [2]

        [3]

        [4]
    */
    printf("Enter the names"); 
    int i; 
    for( i = 0 ; i < 5 ; i++)
    {
        printf("Enter the names[%d]:: ",i); 
        scanf("%s",&names[i]); 
    }
    printf("Names are \n"); 
    for( i = 0 ; i < 5 ; i++)
    {
         printf("%s\n",names[i]); 
    }
    return 0; 
}