#include<stdio.h> 

int main( )
{
    int a; 
    float b; 
    a = 23 / 5; // int / int => int
    //printf("%d",a);    
    
    b = 23 / 5; // int / int => int => float => 4.60 
    // RHS => int 
    // LHS => float 
    // 4.60 ==> 4 => RHS 
    // 4.00 <==4
    //printf("%.2f",b);

    b = 23.0f / 5; // float / int  ==> float 
    // RHS => float 
    // LHS => float  
    printf("%.2f",b);
    
    return 0; 
}
/*
    if 2 operands are diff then smaller 
    type is promoted to larger type for calculation 
    
    double 
    float
    int 
    char 

    int + int => int 
    int + double => double 
    double + float => double 
    char * int => int 
    short / int => int 
    int / float => float 

    char and short values are promoted to "int" for 
    arithmatic calculation 

    char + char => int 
    short + char => int 
    char + short => int 

    typecasting 
    (float)23 => 23 is a int but consider it as a float 
    for this calculation 


*/