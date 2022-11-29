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

    //arr++; // arr = arr + 1     
    
    int res; 
    int *ptr1 = &arr[4]; //116 
    int *ptr2 = &arr[0]; //100 
    
    //res = ptr1 - ptr2; 
    /*
            (ptr1 - ptr2) / scale factor of ptr1 
            (116  - 100)  /  4 
              16 / 4 
                4 
    */
    //printf("res = %d",res); //4 
    
    printf("%u ",arr); // base address => 100 
    printf("%u ",arr + 1); // 104 
    // arr + 1 => arr + 1 * 4 => 104 
    printf("%u ",&arr + 1 ); 
    //           100 + 1 => 100 + 1 * 20 => 120 
    
    return 0; 
}
/*
    int *ptr1 = &num1; // 104   
    int *ptr2 = &num2; // 100 
       // ptr1 = 104 
       // ptr2 = 100 

      ptr1 - ptr2

      104  - 100 / (scale factor of ptr1)    
           4    /  4 
             1   

*/