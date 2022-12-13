
1. What will be the syntax  in the following code snippet?
#include <stdio.h>
int modify(int num) {
	return num + 1;
}
typedef ????;
int main(void) {
	int num;
	funPtr add = modify;
	num = (add)(3);
	printf("result=%d", num);
	return 0;
}
OPTION =>
        1. typedef int (*funPtr)(int);
        2. typedef int (funPtr*)(int);
        3. typedef int (funPtr*)(*int);
        4. typedef int (funPtr)(int);


2. What are the Benefits of Function Pointers?
OPTION =>
       1. Function pointers provide a way of passing around instructions for how to do something
       2. You can write flexible functions and libraries that allow the programmer to choose behavior by passing function pointers as arguments
       3. This flexibility can also be achieved by using classes with virtual functions
T->    4. All of the Above.

3. What are the mandatory part to present in function pointers?
 OPTION =>
      1. &
      2. retrun values
T->   3. data types
      4. none of the mentioned


4. What is the size of myArray in the code shown below?int main()
 
{typedef int x[6];

x myArray[5];
    printf("%d",sizeof(myArray));

    return 0;

}
OPTION =>
T->  1. 120 bytes
     2. 100 bytes
     3. 30 bytes
     4. 5 bytes

5. What will be the Output?
#include <stdio.h>
typedef int integer;
typedef float print;
#define print  unsigned char
int main() 
{
	int i = 10, *ptr;
	print f = 256;
	printf("size =%u size=%u", sizeof(integer), sizeof(print));
	printf("\tf=%u \n", f);
	return 0;

}
  OPTION =>
         1. size =4 size=1	f=0
         2. size=4	size=4		f=256
         3. Compile time error
         4. size=4	size=4		f=0


6. What will be the Output?
#include <stdio.h>
int mul(int a, int b, int c) {
	return a * b * c;
}
int main() 
{

	typedef int (*function_pointer)(int, int, int);
	function_pointer = mul;
	printf("The product of three numbers is:%d", function_pointer(2, 3, 4));
	return 0;
}
OPTION =>
       1. The product of three numbers is:24
       2. Run time error
       3. Compile time error
   T-> 4. Invalid declaration of function pointer

7. void *(*sum) (int*) What do you mean?
OPTION =>
  T->1. (*sum) is a pointer to the function, whose argument is of int* type and return type is void*
     2. (*int) is a pointer to the function, whose argument is of sum* type and return type is void*
     3. (*sum) is a pointer to the function, whose argument is of void* type and return type is int*
     4. None of the above.

8. What will be the Output?
#include<stdio.h>
typedef char *string;
int main( void )
{
string str1 = "abc";
*string str2= "pqr";
printf("str1=%s str2=%s",str1,str2);
return 0;
}
OPTION =>
     1. str1=abc str2=pqr
     2. str1= str2=
  T->3. Error
     4. prints the addresses of str1 and str2

9. int main(){
    typedef int f;
    f *fptr;
    int fval = 98;
    fptr = &fval;
    printf("%f\n", *fptr);
    return 0;
}
OPTION =>
    1. 10
    2. 97
    3. 98
T-> 4. 0

10. What will be the output?
#include<stdio.h>
typedef enum color {
	RED = 21, GREEN, YELLOW, PINK, BLAK = 0
} clr;
typedef enum {
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG
} mts;
int main(void) {

	clr c1, c2;
	c1 = red;
	mts m1;;

	m1 = feb;
	++RED;
	++m1;
	printf("c1 = %d m1 = %d", c1, m1);
	return 0;
}
OPTION =>
  1. c1 = 22	m1 = 3
  2. c1 = 21	m1 = 2
  3. c1 = 21	m1 = 3
  4. OPTION =>Compile Time Error