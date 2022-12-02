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

    // printf("%u ",*( *(arr + 0) )  );// 1
    // printf("%u ", *(*(arr + 1 ) )  );// 4
    // printf("%u ", *(*(arr + 2 ) ));// 7

    printf("%u ", *(*(arr + 0))); // 1
    printf("%u ", *arr[0]);       // 1
                                  /*
            * arr[0]
            *(arr + 0 )    
            *(*(arr + 0 ) )     


     */

    return 0;
}
/*
            *(arr + 1) ==> address 
              &arr[1][0]
            *(*(arr + 1) )  ==> value 
               arr[1][0]

               arr + 1 => outer address 
               *(arr + 1 )=> inner address 
               *(*(arr + 1 ) )=> value 
 
*/