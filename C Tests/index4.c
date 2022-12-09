
1. what will be the output of this code?
#include <stdio.h>                                                          
int main()
{
int i,x=10;         
i=abc(++x);
printf("%d",--i);
return 0;
}
 
int abc(int i)
{
    return(i++);
}
2False. #include <stdio.h>
int a, b, c = 0;
void prtFun (void);
int main ()
{
    static int a = 1; /* line 1 */
    prtFun();
    a += 1;
    prtFun();
    printf ( "n %d %d " , a, b) ;
}
  
void prtFun (void)
{
    static int a = 2; /* line 2 */
    int b = 1;
    a += ++b;
    printf (" n %d %d " , a, b);
}
3. What will it print?
#include<stdio.h>
int doSomething(int a, int b)
{
	if (b==1)
		return a;
	else
		return a + doSomething(a,b-1);
}

int main()
{
	int a = doSomething(2,3);
	printf("%d",a);
}
4. what will be the output of this code?
#include <stdio.h>

int recur(int);

int main()
{
	int no=-5;
		recur(no);
	return 0;
}

int recur(int no)
{
	if(no == 0 )		
	  return 0;

	else
	  printf("%d,", no);

	return recur (++no);
}
5. #include<stdio.h>
void myshow(int);

int main()
{
   int a=10;
   printf("%d ", a);
   myshow(a);
   printf("%d", a);

}

void myshow(int k)
{
   k=20;
}
6. what will be the output of this code?

#include<stdio.h>
int sum_mul(int x, int y)
{
 int p,q;
 p = x + y;

 q = x * y;

 return (p++,q++);
}

int main()
{
  int x,y,z;
  x=10;
  y=20;

  z = sum_mul(x,y);

  printf("\n result = %d\n",z);
  return 0;
}
7 Doubt . which of the following is correct statement?
  a)register int i = 10; 
    int* a = &i;
 
  b)int i = 10; 
    register int* a = &i;

  c)int i = 10; 
    register static int* a = &i; 

  d)#include <stdio.h> 
   register int x = 10; 
   int main() 
   {  
    register int i = 10;  
    return 0; 
   }
8. what is the output of this code?

#include<stdio.h>

int fun(int n)
{
	static int i = 3;
		if (n >= 5)
			return n;
	n = n+i;
	i++;

return fun(n);
}

int main(void)
{
int ret=fun(3);
printf("%d",ret);
return 0;
}
9. What will be the output of the following code?

#include< stdio.h>

int main()
{
extern int a;
auto char j = ‘E’;
printf(“%c %d”, ++j, ++a);
return 0;
}
int a;
10. what will be the output of the code?

#include<stdio.h>

int func_test(int x, int y)
{

 static int p;
 p = x;
 p++;

 return (p,y);
}

int main()
{
  int z;

  z = func_test(10,20);

  printf("\n result = %d\n",z);
  return 0;
}