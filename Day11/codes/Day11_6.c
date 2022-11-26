#include<stdio.h> 
void swap_by_val(int num1,int num2); 
int main( )
{
    int num1 =1 ,num2=2;
    printf("Before swap %d %d\n",num1,num2); // 1 2 
    swap_by_val(num1,num2); //call  
    printf("After swap %d %d\n",num1,num2); // 1 2 
    return 0; 
}
void swap_by_val(int num1,int num2)
{
    int temp; 
    temp = num1; 
    num1 = num2; 
    num2 = temp; 
}