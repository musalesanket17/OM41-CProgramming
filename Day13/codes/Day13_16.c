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
     //int *ptr = &arr[0]; 
     //printf("%u ",ptr); // 100  
     //printf("%u ",arr); // 100  
     
      //printf("%u ",ptr); //100 
      //printf("%u ",ptr + 1 );//104  
      /*
                ptr + 1 
                100 + 1 
                100 + 1 * 4 
                104 

      */
      //printf("%u ",*(ptr + 1) );
      /*
                 *(ptr + 1)
                 valueat(100 + 1 )
                 valueat(100 + 1 * 4 )
                 valueat(104)
                 2    
      */

     //printf("%u ",ptr + 2); //108  
     /*
                ptr + 2 
                100 + 2 
                100 + 2 * 4 
                108 
     */        
     //printf("%u ",*(ptr + 2)); //3
     /*
            *(ptr + 2)
            *(100 + 2)
            *(100 + 2 * 4)
            *(108)
            valueat(108)=> 3 
     */ 

    //  printf("%u ",*(ptr + 1)); // pointer notation 
    //  printf("%u ",ptr[1]); // array  notation 
    //  printf("%u ",1[ptr]); // array  notation 
    //  printf("%u ",ptr[2-1]); // array  notation 
    //  printf("%u ",*(1 + ptr)); // pointer notation

     /*
           array not     pointer notation  
            ptr[0]  => *(ptr + 0 )
     */

       printf("%d ",ptr[-1]); // Garbage  
       /*
                ptr[-1] 
                *(ptr +  -1 )
                *(ptr - 1 )
                *(100 - 1 )
                *(100 - 1 * 4  )
                *(100 - 4)
                *(96)
                Garbage 


       */ 
     return 0; 
}
