
1. What will be the o/p of the following code
If P is a pointer to an integer and T is a pointer to a character then scale factor of P will be
2. #include <stdio.h>
int main(void)
{
	int num=10;
	int *ptr=&num;
	++*ptr++;
	printf("%d",num);
	printf("%d",*--ptr);
}
3. What will be the Output?
#include <stdio.h>
int main()           //assume x address is 2000 and ptr address  is 2004
{
    int x = 0 ;
    int *ptr = &x;
    *ptr += 5;
    printf("\n x  = %d", x);
    printf(" *ptr = %d", *ptr);
    (*ptr)++;
    printf("\n x  = %d", x);
    printf(" *ptr = %d", *ptr++);
    printf("\n Difference= %d", ptr - &x);
    return 0;
}
4. const int *ptr;
Which is true about above statement
I ptr is constant pointer pointing to constant integer value
II ptr is non constant pointer pointing to constant integer value
III ptr is constant pointer
IV ptr is non constant pointer pointing to non constant integer value
5. What will be the Output??
 #include <stdio.h>
int main()
{
	void *p;
	char name[]="ABCDE";
	p = name;
	printf("\n name= %s",p);
	++(*(char*)p);
	printf("\n name= %s",p);
	return 0;
}
6. Predict The Output?
#include <stdio.h>
int main()
{
int i = 97, *p = &i;
show((&i)++);
printf("%d  %d",i,*p);
return 0;
}
void show(int *p)
{
int j = 2;
*p = &j;
printf("%d %d ", j,*p);
 }
7. #include <stdio.h>
int main(void)
{
	char num=256;
	int *ptr=&num;
	*ptr++;
	int *ptr2=--ptr;
	printf("%d",*(char *)ptr2);
}
8. #include<stdio.h>
void swap (char *x, char *y)
{
    char *t = x;
    x = y;
    y = t;
}
int main()
{
char ch1 = 'S', ch2= 'P';
char *ptr = &ch1;
printf("%c", *&*&*ptr);
char *x = &ch1;
char *y = &ch2;
swap(x, y);
printf("(%c , %c)", *x, *y);
return 0;
}
9. What will the following code result?
#include <stdio.h>
void main()
{
int a,b=10;
printf(" COUNT=");
a=show(&b);
printf("\nValue Returned=%d", a);
}
int show(int * x)
{ 
 printf("%d", *x);
return 15;
return 35;
}
10. What will be the o/p of the following code
#include <stdio.h>
int main(void)
{

	int num=10;
	int *ptr=&num;;
	int **pptr=NULL;

	pptr=&ptr+1;

	printf("%d",**--pptr+1);
	return 0;
}
Answers
1. 10
2. Garbage
3. Runtime Error
4. 11