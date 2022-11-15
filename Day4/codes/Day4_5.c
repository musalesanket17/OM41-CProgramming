#include<stdio.h> 

int main( )
{   
    /*
        A - Z ==>  65 to 90 
        a - z ==>  97 to 122 
    */
    //char ch = 'B'; // 66 ==> binary of 66 is getting stored in 1 byte 
      char ch = 66; 
    // char are internally integral constants   
    printf("%c ", ch); // B  
    printf("%d ", ch); // 66   
    return 0; 
    
}
/*
    '\n' '\r' '\b' '\t' ==> characters 
    printf("%d",'\n');  ==> \n => ascii value  


*/