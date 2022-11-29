#include<stdio.h> 

int main( )
{
    int arr[5] = {1,2,3,4,5}; 
    int *ptr = &arr + 1;  
    //         100 + 1 * 20 => 120 
    //   ptr => 120 
    //printf("%d",*ptr); 
    ptr--; 
    /*
            ptr-- 
            ptr = ptr - 1 
                = 120 - 1 
                = 120 - 1 * 4 
                = 120 - 4 
                = 116 

    */
    printf("%d",*ptr); // 5  
    return 0; 
}