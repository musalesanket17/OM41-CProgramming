
1. What is the output of C program with #define.?
#define Q 156
int main()
{
    int a=10;
    a = a*'Q';
    printf("a=%d",a);
    return 0;
}
Answers
1. 1560
2. 156
3. 810
4. 1130
2. What will be output of following code?
#include<stdio.h>
#define p 11+2
int main()
{
    int i;
    i=p++ * p++;
    printf("%d",i);
    return 0;
}
3. What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}
4. #include<stdio.h>
#include<string.h>
#define len(s) strlen(s)
#define EQUAL(X,Y) len(X)>len(Y)?1:0
#define DEF(s1,s2) printf("\n%s %s  ",s1,s2);

int main()
{
int x;
char *str1="PRECAT";
char *str2="EXAM";
if(EQUAL(str1,str2))
    x = DEF(str1, str2)
printf("x = %d \n ",x);

return 0;
}
5. note: consider 64 bit compilation 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a[3];
    a[0] = (int*) malloc(sizeof(int)*3);
    a[1] = (int*) malloc(sizeof(int)*3);
    a[2] = (int*) malloc(sizeof(int)*3);

    printf("\n sizeof(a) = %d \n",sizeof(a));
    free(a);
    return 0;
}
6. what will be the output of this code?
#include <stdio.h>
#define EQUAL(X, Y) X == Y
int main()
{
    #if EQUAL(X, 0)
        printf("SUNBEAM");
    #else
        printf("TEST");
    #endif
    return 0;
}
7. What is dangling pointer in c
8. Can you combine the following two statements into one?
char *p;
p = (char*) malloc(100);
9. What is the output of C program
#include <stdio.h>
#define p 24;
int main()
{
  printf("%d",p);
  return 0;
}
10. #include<stdio.h>
#include<stdlib.h>
int main()
{
char *ptr=NULL;
int alloc_length =16 ;
int new_length;

ptr = (char *)malloc(sizeof(char)*alloc_length);

ptr = realloc(ptr, alloc_length << 1);

free(ptr);
ptr=NULL;

return 0;
}