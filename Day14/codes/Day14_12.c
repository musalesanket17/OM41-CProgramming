#include<stdio.h> 

int main( )
{
    int num = 10; 
    const int *ptr = &num; 

    printf("%d ",*ptr ); 

    //*ptr = 20; 
    printf("%d ",*ptr );
    return 0; 
}
// int main( )
// {
//     const int num = 10; 
//     int *ptr = &num; 

//     printf("%d ",*ptr ); 

//     *ptr = 20; 
//     printf("%d ",*ptr );
//     return 0; 
// }