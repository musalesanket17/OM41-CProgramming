#include<stdio.h> 

int main()
{
    // int ans; 
    // int num1 = 1; 
    // int num2 = 2; 
    // ans = num1 && num2;
    // //     T   &&  T 
    // //         T => 1   
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 2; 
    // ans = num1 && num2;
    // //     F   &&  XXX 
    // //         F => 0    
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 1; 
    // int num2 = 0; 
    // ans = num1 && num2;
    // //     T   &&  F 
    // //         F => 0    
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 0; 
    // ans = num1 && num2;
    // //     F   &&  XXX 
    // //         F => 0    
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 0; 
    // ans = num1 || num2;
    // //     F   ||  F 
    // //         F => 0    
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    
    int ans; 
    int num1 = 0; 
    int num2 = 10; 
    ans = num1 || num2;
    //     F   ||  T 
    //         T => 1    
    printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);  
    

    return 0; 
}