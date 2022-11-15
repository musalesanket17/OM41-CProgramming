#include<stdio.h> 

int main( )
{
    // escape sequences 
    // \n 
    //printf("Sunbeam\ninfo\ncom"); 
    /*
            Sunbeam 
            info 
            com 
    */

    //printf("\"Hello world\"");
    //printf("\'Hello world\'");  

    // \b => backspace 
    //printf("OM41 batch,\b.");
    //      OM41 batch. 

    //printf("Hello wo\brld");
    //      Hello wrld

    // \t => tab space 
    // 1 tab => 8 spaces
    //printf("12345678\n"); 
    //printf("\tSunbeam");  
    
    //printf("\t12345678\t12345678\t12345678"); 

    //printf("\tSunbeam\tinfo\tcom"); 
    // - - - - - - - -S u n b e a m - i n f o - - - - c o m 

    // \r ==> carraige return 

    //printf("KM 41batch\rO"); 
    //      OM 41batch

    
    //printf("\\n is used for newline");
    printf("Discount is 10%%");  

    return 0; 
}
/*
    printf("\tSunbeaminfo\tcom"); 
    //      - - - - - - - - Sunbeaminfo- - - - - com  

    printf("KM 41batch\b\b\b\b\b\b\b\b\b\bO")
    //      OM 41batch  
*/
