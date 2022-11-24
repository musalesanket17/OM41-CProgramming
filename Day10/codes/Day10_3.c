#include<stdio.h> 
double addition( double x , double y  ); // function declaration 
void multiplication( double a , double b ); 
int division(int num , int den ); 
void subtract(  void ); 
// pass by value / call by value 
int main(  void )
{
    double num1 = 10.00 , num2 = 20.00 , res; 
    // local variables 
    res = addition( num1 , num2 ); // function call 
    printf("res = %.2lf",res); 

    multiplication(2.0 , 4.0 ); // function call  

    int num,den,ans; 
    printf("\n Enter the num and den");
    scanf("%d%d",&num,&den); // 4 2  
    ans = division( num , den); 
    printf("\n ans = %d",ans); // 2 

    subtract( ); 
    return 0; 
}

void subtract( void  )
{
    int p,q,r; // local variables 
    printf("\n Enter the 2 numbers"); 
    scanf("%d%d",&p,&q); 
    r = p - q; 
    printf("r = %d",r); 
}

int division(int num , int den )
{
        int r; 
        r = num / den; // 4 / 2 => 2 
        return r; 
}


double addition( double x , double y  )
{
    // x and y are local to the addition function 
    // x and y are local variable 
    double res; // local variable 
    res = x + y; // 30.00 
    return res; 
}

void multiplication( double a , double b )
{
    // a and b are local variables 
    double res;  
    res = a * b; // 2.0 * 4.0 => 8.0 
    printf("\n res = %.2lf",res); // 8.0
    
}

