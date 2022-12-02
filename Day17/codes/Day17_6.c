#include <stdio.h>
//int arr[3][3];
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /*
        arr 

                    [0]   [1]   [2]
            [0]      1     2     3 
            100     100    104   108  

            [1]      4     5     6 
            112    112    116   120   

            [2]      7     8     9
            124    124    128   132   

    */

    int row, col;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%u  ", &arr[row][col]);
        }
        printf("\n");
    }

    printf("\n\n");
    int *ptr[3] = { arr , arr + 1 , arr + 2};
    //              100    112       124  
    
    //printf("%u ",ptr[0]); //100 
    //printf("%u ",ptr[1]); //112 
    //printf("%u ",ptr[2]); //124 

    //printf("%u ",*(ptr + 0) ); //100 
    //printf("%u ",*(ptr + 1) ); //112
    //printf("%u ",*(ptr + 2) ); //124    
    
    //printf("%u ",*(*(ptr + 0) )); // 1  
    //printf("%u ",*ptr[0]); // 1  
    //printf("%u ",*(*(ptr + 1 )) );// 4  
    //printf("%u ",*(*(ptr + 2) ));// 7  
    //printf("%u ",*(ptr + 0 ) + 1  ); //104 
    //printf("%u ",*(*(ptr + 0 ) + 1 ) );// 2  
    //printf("%u ",ptr[0][1]); // 2 
    
        printf("%u ",*(ptr + 1) + 2  ); //120 
        printf("%u ",*(*(ptr + 1) + 2 )  ); //6
        printf("%u ",ptr[1][2]); // 6  
    return 0;
}
/*
          ptr[0] [1] => value => array 
        *(*(ptr + 0) + 1) => value => pointer notation 

      int *ptr[3] = { arr , arr + 1 , arr + 2};

      char *name[3] = {"one","Two","Three"};   
      char *argv[]; 

*/