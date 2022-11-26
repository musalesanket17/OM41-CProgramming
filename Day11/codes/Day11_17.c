#include<stdio.h> 

int main( )
{
    int a = 10; // stack => mains's FAR 
    //static int num = a; 
    return 0; 
}

// int main( )
// {
//     int a = 10; // stack => mains's FAR 
//     // a will be destroyed when main's FAR is detroyed 
//     static int num = 10; // Data section => function scope  
//         /*
//             After main's FAR is destroyed 
//             After completion of main 
//         */
//     return 0; 
// }