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
    printf("%u ",arr); // Name of array = > 100 
    printf("%u ",arr+1); //104 
    /*
            arr + 1
            100 + 1 
            100 + 1 * 4 
            104  
    */
     printf("%d \n", *(arr + 1) ); // 2 
     /*
                *(arr + 1 )
                *(100 + 1 )
                *(100 + 1 * 4)
                *(100 + 4)
                *(104)
                valueat(104)
                2
    */
    printf("%u ",arr + 2); 
    /*
            arr + 2 
            100 + 2 
            100 + 2 * 4 
            108 
    */
    printf("%u ",*(arr + 2)); //3 
    /*
        /*
            *(arr + 2) 
            *(100 + 2) 
            *(100 + 2 * 4)
            *(108)
            valueat(108) => 3 
             
    */
    
    return 0; 
}
/*
        arr => base address => 100 
        *arr => valueat(100) => 1 

        arr + 1 => 100 + 1 => 104 
        *(arr + 1) => valueat(104) => 2 

        arr + 2 => 100 + 2 => 108 
        *(arr + 2 )=> valueat(108) => 3 
*/