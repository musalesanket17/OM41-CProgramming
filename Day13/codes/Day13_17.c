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

    //printf("\n"); 
     
     int *ptr = arr; // pointer to 1D array  

     //printf("%d ",arr[0]); // 1 
     //printf("%d ",*(arr + 0) ); // 1
     //printf("%d ", *arr + 1 ); // 2  
     /*
            *arr 
            valueat(arr)
            valueat(100)
            1  
     */
    //printf("%d ",ptr[0]); // 1 
    //printf("%d ",*(ptr + 0)); // 1 
    //printf("%d ",*ptr + 1);// 2  
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
            1
    */
     printf("%d ",arr [arr[0] ]  ); 
     //           arr [   1    ]
     //                 2  
     return 0; 
}
