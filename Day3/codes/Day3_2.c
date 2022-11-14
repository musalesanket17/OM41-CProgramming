#include<stdio.h>

int main( )
{
    // datatypes ==> int , double ,char 
    int num = 10; // variable declaration + initialization  
    double dvar = 12.3; // variable declaration + initialization  
    char ch = 'A';// variable declaration + initialization   

    // format specifier 
    printf("%d\n",num);
    //      10 
    printf("%.3lf\n",dvar);
    //      12.3
    printf("%c\n",ch);
    //      A     

    return 0; 
}

// int x = 12; 