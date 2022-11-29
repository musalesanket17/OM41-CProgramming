#include<stdio.h> 

int main( )
{
    //int a = 1 , b = 2; 
    //printf("%d %d",a,b); // 1 2  
    
    int num = 10; 
    int *ptr = &num; 

    printf("%d %d",num,++*ptr); 
    //              11 , 11  
    
    // calling convention 
    // CDECL 

    return 0; 
}
// printf("%d %d %d %d",a++,++a,a++,a); // compiler dependent 