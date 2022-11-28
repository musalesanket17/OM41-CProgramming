#include<stdio.h> 
int arr[5];  //  0 
int main( )
{
    
       int arr[5] = {1,2,3,4,5}; // init list 
      //printf("%d ",sizeof(arr)); // 5 * 4 => 20 
      //printf("%d ",sizeof(arr[1])); // 4 * 1 => 4 
      //printf("%d ",sizeof(arr[-1])); // 4 * 1 => 4 
      

    /*
            array index always starts from 0 to n-1 

       arr      

             1     2     3     4     5  
            [0]   [1]   [2]   [3]   [4]
            100   104   108   112   116

        

    */
    // name of array represents base address 
    // The array name is treated as address of 0th element 

    int index; 
    // for( index = 0 ; index < 5 ; index++)
    //         printf("%u  ",&arr[index]);

    printf("\n"); 
    //printf("%d ",arr[1]); //2 
    //printf("%d ",*(arr + 1)); // 2 
    /*
                *(arr + 1)
                *(100 + 1)
                *(100 + 1 * 4)
                *(104) => 2  
    */      
   /*       array notation          pointer notation 
            arr[1]          ==>   *(arr + 1 )
            arr[2]          ==>   *(arr + 2 )
            arr[3]          ==>   *(arr + 3 )

   */

    // printf("%d ",arr[1]); //2
    // printf("%d ",1[arr]);// 2 
    // printf("%d ",arr[2-1]);// 2 
    // printf("%d ",*(arr + 1)); // 2
    // printf("%d ",*(1 + arr)); // 2
    // printf("%d ",*(arr + 2 - 1 )); // 2  

      //printf("%d ", arr[-1]); // G 
      /*
                arr[-1] 
                *(arr + -1)
                *(arr - 1 )
                *(100 - 1 )
                *(100 - 1 * 4)
                *(100 - 4)
                *(96)


      */
     //printf("%d ",arr[0]); // 1 
     //printf("%d ",++arr[0]); // 2
     //printf("%d ",arr[0]); // 2 

     printf("%d ",arr[0]++);// 1 
     printf("%d ",arr[0]); // 2 
     
     return 0; 
}
