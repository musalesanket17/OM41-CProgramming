#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; 
    printf("\n %u ",&num); // 100
    printf("\n %u \n",ptr); // 100 

    // pointer arithmatic 
    ptr = ptr + 1;
    /*  
            ptr + 1 
            ptr + n * scalefactor of ptr 
            100 + 1 * 4
            104 
    */  
    printf("\n %u \n",ptr); // 104 
    ptr--; 
    /*
            ptr = ptr - 1 
                  104 - 1 
                  104 - 1 * 4 
                  104 - 4 
                  100   
    */
    printf("\n %u \n",ptr); // 100
    printf("\n %u \n",*ptr); // 10   
    return 0; 
}
/*
        (int*)
        ptr + 10; 
        ptr + 10 * 4 => 
        100 + 40 => 140 

        (char*)
        ptr + 10 * 1 =>
        100 + 10 => 110 
        
        (double*)
        ptr + 10 * 8 =>
        100 + 10 * 8 => 180 

        (float*)
        ptr + 10 * 4 =>   
        100 + 40 => 140 
*/