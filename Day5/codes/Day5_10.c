#include<stdio.h>

int main( )
{
    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 2;
    // float avg; 
    // avg = (num1 + num2 + num3 ) / 3;
    // //     (int + int + int ) / (int)
    // //           int / int 
    // //              int 
    // // RHS => int => 6/3 => 2 => int 
    // // LHS(float)<=int(rhs)
    // //  2.00 <== 2       
    // printf("%.2f",avg);     

    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3 ) / 3;
    // //     (int + int + int ) / (int)
    // //           int / int 
    // //              int 
    // // RHS => int => 5/3 => 1.6 => int => 1 
    // // LHS(float)<=int(rhs)
    // //  1.00 <== 1       
    // printf("%.2f",avg);     

    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3 ) / 3.0;
    // //     (int + int + int ) / (double)
    // //           int / double 
    // //              double 
    // // RHS => double => 5/3 => 1.6 => double => 1.6  
    // // LHS(float)<=double(rhs)
    // //  1.6 <== 1.6       
    // printf("%.2f",avg);     

    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 1;
    // float avg; 
    // avg = (num1 + num2 + num3 ) / 3.0f;
    // //     (int + int + int ) / (float)
    // //           int / float 
    // //              float 
    // // RHS => float => 5/3 => 1.6 => float => 1.6  
    // // LHS(float)<=float(rhs)
    // //  1.6 <== 1.6       
    // printf("%.2f",avg);     

    // int num1 = 2; 
    // int num2 = 2;
    // int num3 = 1;
    // float avg; 
    // avg = ((float)num1 + num2 + num3 ) / 3;
    // //     (float + int + int ) / (int)
    // //           float / int 
    // //              float 
    // // RHS => float => 5/3 => 1.6 => float => 1.6  
    // // LHS(float)<=float(rhs)
    // //  1.6 <== 1.6       
    // printf("%.2f",avg);

    //int num = 1.3; 
    //int<-double
    //1  <- 1.3  
    //printf("%d",num);       
    
    float f = 1; 
    // float <-int   
    // 1.00<-1
    printf("%.2f",f); // 1.00   
    return 0; 
}