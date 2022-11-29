#include<stdio.h> 

int main( )
{
    int arr[5] = {11,22,33,44,55};
    /*
            array index always starts from 0 to n-1 

       arr      

            11    22    33   44   55  
            [0]   [1]   [2]   [3]   [4]
            100   104   108   112   116

    */
    int *ptr = arr; // pointer to 1D array  
    
    printf("%d ",*ptr); // 11 
    // *ptr => valueat(100)=> 11 
    printf("%d ",++*ptr); // 12
    /*
        *ptr => 11 
        *ptr = *ptr + 1 
             =  11  + 1 
             =  12    
    */ 
    //printf("%d ",arr[0]); //12 
    
    printf("%d ",*++ptr); // 22 
    // ++ptr = ptr + 1 => ptr + 1 * 4 =>  
    
    printf("%d ",*ptr++); // 22 

    printf("%d ",*ptr); // 33


    return 0; 
}
// ++*ptr++; 