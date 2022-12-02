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

    //printf("%u ", *(arr + 0) + 1  ); //104 
    /*
            *(arr + 0) + 1  
               100 + 1 
               100 + 1 * 4
               104  
    */ 
    //printf("%u ", *(*(arr + 0) + 1 )  );// 2 

    //printf("%u ",*(arr + 1 )+1 ); //116 
    //printf("%u ",*(*(arr + 1) + 1 )  ); // 5  
    
    //printf("%u ",*(arr + 2 ) + 2 ); //132 
    //printf("%u ",*(*(arr + 2 ) + 2 )  ); //9 
    
    printf("%d ",arr[2][2]); // array notation 
    printf("%d", *(*(arr + 2) + 2 )); // pointer notation 

    return 0;
}
/*
                arr[1][1] => array notation 

                *(*(arr + 1) + 1 ) => pointer notation  

        arr + 0 => outer address 
        *(arr + 0) => inner address 
        *(arr + 0 ) + 0 => &arr[0][0]
        *(*(arr + 0 ) + 0 ) => arr[0][0] => value 

       
*/