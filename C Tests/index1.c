
1. Which are the following statements will result in error.
int main()
{
    short char c1;		        // I.
    long char c2;    		// II.
    short int num1;		// III.
    long int num2;		        // IV.
    short float f1;		        // V
    long float f2;		        // VI
    short double d1;   		// VII
    long double d2;		// VIII
}
2. What is the output of following program?
#include<stdio.h>
int main()
{
	int a=10,i = 20;
	char b;
	printf("%d\n",(sizeof(i-a)+sizeof(b)));
	return 0;
}
3. Which of the following statement is correct about the code snippet given below?

num = 5;
printf( "%d", ++num++ );
4. Which of the following can be considered as a derived data type ?
5. #include <stdio.h>
int main() 
{
	int num = 25;
	num  = !num  > 23;
	printf("num  = %d", num);
}
6. What is the use of putchar()?
7. How many numbers can print after a point using %.2f
8. What will be the output?
#include<stdio.h>
int main(void)
{
int j=6;
	float f=20.8f;
	double d=44.6;
	printf("\n%u %u %u %u",sizeof(j),sizeof(6),sizeof('a'),sizeof(20.8f));
	printf("\n%u %u %u %u",sizeof(44.6), sizeof(j++), sizeof(j + --f), sizeof(j + 44.6));
	printf("\n %.2f %.2f",f,d);
	return 0;
}
9. What will the output of the following:
int main()
{
    int a=1,b=-1,c=2,d;
    c = sizeof(++b);
    d = a-- && b++ || c++;
    printf("a=%d b=%d c=%d z=%d\n",a,b,c,d);
}
10. int main()
{
    int a = 1, b=1,c=1,d;
    d = b++ && ++a == --c  ;
    printf("d = %d",d);
}