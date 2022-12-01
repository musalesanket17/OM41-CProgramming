#include<stdio.h>

int main( )
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    /*
        arr 

                    [0]   [1]   [2]
            [0]      1     2     3 
                    100    104   108  

            [1]      4     5     6 
                    112    116   120   

            [2]      7     8     9
                    124    128   132   

    */
    //array notation  
    // printf("%d ",arr[0][0]); // 1 
    // printf("%d ",arr[0][2]); // 3 
    // printf("%d ",arr[1][1]); // 5  
    // printf("%d ",arr[2][2]); // 9 

    int row,col; 

    // for( row = 0 ; row < 3 ; row++)
    // {
    //      for( col = 0 ; col < 3 ; col++)
    //      {
    //          printf("%4d",arr[row][col]); 
    //      }
    //     printf("\n"); 
    // }
    for( row = 0 ; row < 3 ; row++)
    {
         for( col = 0 ; col < 3 ; col++)
         {
             printf("%u  ",&arr[row][col]); 
         }
        printf("\n"); 
    }


    return 0; 
}