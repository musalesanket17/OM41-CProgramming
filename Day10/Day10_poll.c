1.
#include<stdio.h>
int main( void )
{
    enum color {red,green,yellow,pink,black=0};
    enum color c1,c2;
    c1=red;
    c2=black;
    printf("color code for c1=%d,c2=%d",c1,c2);
    return 0;
}

A. color code for c1=0,c2=0
B. color code for c1=-4,c2=0
C. compile time error
D. color code for c1=1,c2=0

Answer: A


2.
#include<stdio.h>
int main( void )
{
    int n1=3,n2=5;
    enum Code {code1=n1,code2=n2,code3=n1+n2,code4=n2-n1};
    enum Code c1=code3;
    printf("value=%d",c1);
    return 0;
}

A. 8
B. 5
C. compile time error
D. 0

Answer: C

3.
#include<stdio.h>
enum months {jan=1,feb,mar,apl,may,jun,jul,aug};
typedef enum months MONTHS;
int main( void )
{
    MONTHS m1, m2;
    printf("size=%d",sizeof(MONTHS)+ sizeof(enum months));
    return 0;
}


A. 1
B. 4
C. 2
D. 8

Answer: D

4.
Enumeration constant is of

A. char type
B. Float type
C. int type
D. None of above

Answer: C

