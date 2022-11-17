#include<stdio.h> 

int main()
{
    // int ans; 
    // int a = 0; 
    // int b = 1; 
    // int c = 0; 
    // ans =  a++ && b++ || c++; 
    // //    (a++ && b++)|| c++; 
    // //    (F++ && XXX)|| 
    // //        F       || F
    // //                F 
    // //          L     ||  R 
    // printf("a=%d b=%d c=%d ans = %d",a,b,c,ans);  
    
    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans =  a++ && b++ || c++; 
    // //    (a++ && b++)|| c++; 
    // //    (T++ && T++)|| 
    // //          T     || XXX
    // //              T 

    // printf("a=%d b=%d c=%d ans = %d",a,b,c,ans); 2,2,0,1 
    
    
    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans =  a++ || b++ && c++; 
    // //     a++ || (b++ && c++);
    // //     T++ ||  XXX  
    // //         T  
    // //     L   ||   R    
    // printf("a=%d b=%d c=%d ans = %d",a,b,c,ans);  
    
    // int ans; 
    // int a = 0; 
    // int b = 1; 
    // int c = 10; 
    // ans =  a++ || b++ && c++; 
    // //     a++ || (b++ && c++);
    // //     F++ || (T++ && T++ )
    // //     F++ || T 
    // //        T   
    // printf("a=%d b=%d c=%d ans = %d",a,b,c,ans);  
    
    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 10; 
    // ans =  a++ || b++ || c++;
    // //     T++ || XXXX
    // //         T  
    
    // printf("a=%d b=%d c=%d ans = %d",a,b,c,ans);  
    
    
    int ans; 
    int a = 1; 
    int b = 1; 
    int c = 0; 
    ans =  a++ && b++ && c++;
    //     (a++ && b++) && c++; 
    //     (T++ && T++) && 
    //          T       && F++ 
    //                 F  
    printf("a=%d b=%d c=%d ans = %d",a,b,c,ans);  
    
    
    return 0; 
} 
/*
    int a = 0; 
    int b = 2; 
    int c = 3; 
    int ans; 

    ans = a++ || b++ && ++c && a++ || b++; 
    printf("a=%d b=%d c=%d ans = %d",a,b,c,ans);  


*/