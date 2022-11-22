#include<stdio.h> 

int main( )
{
    int i,j,k; 

    // for( i = 1 ; i<=5 ; i++)// i =6
    // {

    //     printf("for each        i:%d",i); 
    //     for( j = 1; j<=5 ; j++)
    //     {
    //         printf("       j:%d",j);
    //     }
    //     printf("\n\n"); 
    // }

    // for( i = 1 ; i<=5 ; i++)// i =3 
    // {

    //     printf("for each        i:%d",i); 
    //     for( j = 1; j<=5 ; j++)//j=1 
    //     {
    //         printf("for each        j:%d",j);  
    //          for(k = 1 ; k<=5 ; k++)//k=1,2,3,4,5,6
    //          {
    //                printf("       k:%d",k);
    //          }
    //       printf("\n\n");    
    //     }
    //     printf("\n\n"); 
    // }

    for( i = 1 ; i<=5 ; i++); 
    
    
    {

        printf("for each        i:%d",i);//6  
        for( j = 1; j<=5 ; j++);



        {
            printf("for each        j:%d",j); // 6  
             for(k = 1 ; k<=5 ; k++); 
             
             
             
             
             {
                   printf("       k:%d",k);// 6 
             }
          printf("\n\n");    
        }
        printf("\n\n"); 
    } 

    return 0; 
}
/*
    *****
    *****
    *****
    *****
    *****

    *
    * *
    * * * 
    * * * * 
    * * * * * 
    

    1 - 10 

    5 - 10
    4 - 6  

    for( i = 1 ; i<=5 ; i++)
    {
        for( j = 1; j<=i ; j++)
        {
            printf("*"); 
        }
        printf("\n"); 
    }
    
    * 
    * *
    * * * 
    * * * * 
    * * * * * 
*/