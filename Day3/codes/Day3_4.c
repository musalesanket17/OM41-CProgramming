#include<stdio.h> 

int main( )
{
    int number; // variable declaration 
    int roll = 500; // variable declaration  + init 
    /*
            double basic_salary = 1000.00; 
            double total_salary = 2000.00; 
    */
    double basic_salary = 1000.00, total_salary = 2000.00; //var decln + init 
// we can declare multiple variables in single line     

    char ch = 'A'; // variable decln + init 
    printf("Variable and datatypes\n");
    number = 20; // Assignment 
    printf("number = %d\n",number);
    //      number = 20  
    roll = 30;  // Assignment 
    printf("roll = %d\n",roll); // 30  
    number = 50; // Assignment 
    printf("number = %d\n",number); // 50 

    printf("%.2lf %.2lf\n",basic_salary,total_salary);

    printf("%d %d %.2lf %.2lf\n",roll,number,basic_salary,total_salary);  
    printf("%c",ch); 

    return 0; 
}
/*
    printf("%d\n%d",roll,number);
    10  
    20 
*/