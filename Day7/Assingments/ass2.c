
#include <stdio.h>

/*
Q1.Write a program to accept a 5 digit number and check whether it is
a numeric palindrome.

Q2.Write a program to display number of days in the given year. Check
condition for leap year. A year is a leap year if it is divisible by 4 but
not by 100, except that years divisible by 400 are leap years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/

int main()
{
    int year;
    printf("Enter Any Year : ");
    scanf("%d", &year);
    /*




       if( year % 4 == 0 && year % 400 == 0){
           printf("leap Year!");
       }
       else
            printf("Not Leap Year! %d", year);
        */

       year %4==0 && year % 400 ==0 ? printf("Leap Year ! %d" , year) : printf("Not Leap Year ! %d" , year); 

    return 0;
}