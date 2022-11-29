#include<stdio.h> 

int main( )
{
    // type qualifier => const , volatile
      const int num = 10; 
      //const int num; 
    //num = 11;// NOT OK  
    //num = 11; // NOT OK
    printf("num = %d",num); // 10    
    return 0; 
}