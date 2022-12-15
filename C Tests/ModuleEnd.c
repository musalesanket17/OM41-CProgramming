
1. What will be the o/p of the following code?
#include <stdio.h>
int num=5;
void fun(void);
int main(void)
{
	int num=3;

	for (fun(); ++num<5; fun())
	{
		fun();
	}
}
void fun(void)
{
	printf("%d",++num);
}

       1. 4 6 8
   T-> 2. 6 7 8
       3. 4 6 7
       4. Compile time error


2. What will be the o/p of the following code
#include<stdio.h>
#include<string.h>
int main()
{
	int result=0;
	result = printf(" ");//Count Space as "ONE"
	switch (result)
	{
		case 0:
			printf("Hello 0 ");
			break;
		case 1:
			printf("Hello 1 ");
			break;
		default:
			printf("Default case");
			break;
	}
}


       1. Hello 0
       2. Default case
       3. No Output
  T->   4. Hello 1


3. What will be the o/p of the following code
#include<stdio.h>
int main()
{
	int num=10;
	int * const ptr = NULL;//Const PTR take value at same line
	ptr=&num;
	printf("%d",*ptr);
	printf("%d",num);
}


       1. 10 10
       2. 10 0
   T->    3. Compile time Error
       4. 0 0


4. What will be the o/p of the following code

#include<stdio.h>
void recFun(int num);
int main()
{
	int num=3;
	recFun(num);
}
void recFun(int num)
{
	if(num>=0)
	{
		recFun(--num);  //Go till  if(num>=0) condition then print All Value from End
		printf("%d",num);
	}
}


   T->  1. -1 0 1 2
       2. 2 1 0 -1
       3. No Output
       4. -1 0 -1 -2
       



5. What will be the o/p of the following code
#include<stdio.h>
int main()
{
	int result;
	char name[10]="Sun\0beam";
	result = strlen(name);
	printf("%d",result++);

}



         1. 4
   T->    2. 3
         3. 8
         4. 9


6. What will be the o/p of the following program 

#include<stdio.h>
#include<string.h>
int main()
{
	int a=11;
	if(a>10)
		printf("Value of a is %d ",a);
		printf("Value is greater than 10");
	else
		printf("Value is less than 10");
        printf("Outside the if statement");
}


            1. Value of a is 10
              Value is greater than 10
            2. Value of a is 10
              Outside the if statement
      T->   3. Compile time Error             // If you dont want Error then give Braket {}
            4. Value is greater than 10
                Outside the if statement


7. What will be the o/p of the following code?
#include<stdio.h>
int show(int num1 , int num2);
static int result;
int main()
{
	int ans;
	int num1 =  1;
	int num2 =  2;
	ans = show(num1,num2);
	printf("%d %d",ans,result++);
}
int show(int num1 , int num2)
{
	int result;
	result = num1 + num2;
	return num2++,result;
}


          1. 3 3
    T->   2. 3 0
          3. 2 0
          4. 3 1



8. What is constant in the following snippet
  int * const ptr;

      1. value is constant
      2. Both value and pointer is constant
   T-> 3. Pointer is constant
      4. No such declaration allowed
      


9. What will be the o/p of the following code
#include<stdio.h>
int main()
{
int i;
for (i = 0; i < 3; )
{
	i++;
}
if(i==3)
{
    break;
	printf("Hello");
}
 printf("World");
 return 0;
}


        1. World
        2. HelloWorld
   T->  3. Compile time Error   // Breake [Switch] And continue statement always Use With "Loop"
        4. Runtime Error


10. What will be the o/p of the following code
#include<stdio.h>
#define EXECUTE(x,y) x##y
int main()
{
	int a = 200,b=300,ab=400;
	printf("%d",ab+EXECUTE(a,b));
	return 0; //ab  +  ab
              //400 + 400
              //800
}


           1. 1000
       T-> 2. 800
           3. 900
           4. Compile time Error


11. What will be the o/p of the following code
#include<stdio.h>
struct bit
{
	unsigned int a:3;
	int b:3;
};
int main()
{
	struct bit b1;
	b1.a=10; 
	b1.b=5;
	printf("%d",b1.a);
	printf("%d",b1.b);
}

            1. 1 -2
       T->  2. 2 -3
            3. 1 -2
            4. 1  1


12. What will be the o/p of the following code?
#include<stdio.h>
void display(int **pp);
int main(void)
{
int arr[3][4]={{1,2,3,4},{4,3,2,8},{7,8,9,0}};
int *ptr=NULL;
ptr = &arr[0][1];
ptr++;
display(&ptr);
return 0;
}
void display(int **pp)
{
printf("%d", **pp);
return;
}


        1. 2
    T-> 2. 3
        3. Garbage
        4. 1


13. Which of the following can be considered as pure declaration?
I int number;
II int number=5;
III extern int number;
IV extern int number=5;


       1. Both I and II
   T-> 2. Only III
       3. Both I and III
       4. All of Above


14. What will be the o/p of the following code
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	char src[10]="Sunbeam";
	char dest[10];
	strcpy(dest,src+1);
	strcat(dest,strcpy(dest,dest+2)); // "beam" and copy in [dest] then concat "beam" = beambeam
	strcpy(src,dest);
	printf("%s",src);
	return 0;
}

        1. Sunbeam
        2. beam
        3. nbeam
    T-> 4. beambeam


15. What will be the o/p of the following code?
#include <stdio.h>
int main(void)
{
 int a[5] = {45, 1, 7, 10, 35};
 int x, y, z;
 x = ++a[1];
 y = a[1]++;
 z = a[x++];
 printf("%d, %d, %d", x, y, z);
 return 0;
}


        1. 2,2,7
        2. 2,3,7
    T-> 3. 3,2,7
        4. 2,3,10


16. #include <stdio.h>
#include<stdlib.h>
static int count=1;
int i=1;
void test(int num);
int main(void)
{
	int num=1;
	test(num);
	return 0;
}
void test(int num)
{
	if(num<=2)
	{
		int i=1;
		printf(" %d ",i++);
		printf(" %d ",count++);
		i++;
		test(num+1);
	}
	else
		return;
}



        1. 1 2 2 1
      T->2. 1 1 1 2
        3. 1 1 1 1
        4. Infinite loop



17. What will be the o/p of the following program 
#include<stdio>
int main()
{
	int num1=0;
	int num2=2;
	int result;
	result = ++num1 && num2-- && --num1 || ++num2 ;
	printf("%d %d %d",num1,num2,result);
}


        1. 1 2 0
     T->2. 0 2 1
        3. 1 2 1
        4. 0 2 2


18. What will be the o/p of the following code
#include<stdio.h>
void show(void);
int main(void)
{
	int i;
	for (i = 0;i<=5; ++i)
	{
		if(i==5)
			goto display;
		printf("%d",i++);
	}
}

void show(void)
{
	display:
	printf("Hello");
}


           1. 2 4 6 Hello
           2. 0 2 5 Hello
      T->  3. Compile time Error
           4. 0 2 4 6




19. 1.Conventional method to store raw address in C programming which of the following is used

        1. Integer Pointer
        2. Null pointer
        3. Void pointer
     T->4. All of the Above


20. What will be the o/p of the following statment 
#include<stdio.h>
#include<string.h>
int main()
{

	int a=10;
	int b=20;

	if(a==100)
	if(b==20)
	printf("Match 1");
	else
	printf("Match 2");
}


         1. Match 2
         2. Compiletime error
         3. Runtime Error
    T->  4. No Output