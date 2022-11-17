#include <stdio.h>

int main()
{
    /*
      int a = 1;
      int ans;
      // ans = ++a,++a,++a;
      ans = a++, a++, a++;
      printf("a = %d ans = %d", a, ans);
      return 0;



    int a, b, c;
    a = (1, 2, 3);
    // a = 3
    b = (++a, ++a, ++a);
    //     4  , 5   , 6
    // b = 6
    // a = 6
    c = (b++, b++, b++);
    printf("a = %d b= %d c=%d", a, b, c);

    int ans;
    int num1 = 11;
    int num2 = 22;
    ans = num1 && ++num2;
    //     T   && ++T
    //         T
    printf("ans = %d num1 = %d num2 = %d", ans, num1, num2);

    int ans;
    int num1 = 0;
    int num2 = 12;
    ans = ++num1 || ++num2;
    //  ++F=>T   ||  XXX
    //          T
    printf("ans = %d num1 = %d num2 = %d", ans, num1, num2);

    int ans;
    int a = 0;
    int b = 1;
    int c = 0;
    ans = a++ && b++ || c++;
    //    (a++ && b++)|| c++;
    //    (F++ && XXX)||
    //        F       || F
    //                F
    //          L     ||  R
    printf("a=%d b=%d c=%d ans = %d", a, b, c, ans);

    int ans;
    int a = 1;
    int b = 1;
    int c = 0;
    ans = a++ || b++ && c++;
    //     a++ || (b++ && c++);
    //     T++ ||  XXX
    //         T
    //     L   ||   R
    printf("a=%d b=%d c=%d ans = %d", a, b, c, ans); // 2,1,0,1

    1. Write a program to accept three digit number and find sum of all
        its digits



    int n1,d1,d2,d3,d4,sum;


      printf("Enter Three digit Number : ");

      scanf("%d" , &n1);

      d1 = n1%10 ;
      n1 = n1/10;

      d2 = n1%10;
      n1 = n1/10;

      d3 = n1%10;
      n1 = n1/10;

      sum =d1 + d2 +d3 + n1;
      printf("%d" , sum);

      2. Write a program to convert temperature in Celsius to Fahrenheit
       vice versa.       Formula for conversion is       ºC = 5/9 x (ºF - 32)

*/
 
      float temp , cels ;
     printf( " \" Enter Temprature in fahrenehit \" ");
     scanf("%f" , &temp);
        printf("%f\n" , temp);
      cels = (temp-32) * 5/9 ;
      printf("%f\n" , cels);



    return 0;
}