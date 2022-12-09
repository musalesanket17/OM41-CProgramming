
1. What will be the output of following program ?
#include <stdio.h>
void main()
{
    !printf("") ? printf(“Sunbeam”) :  printf(“Karad”);
   }
2. What will be the output of following program ?

#include<stdio.h>
enum menu
{ a=2,b,c,d=-1,e};
enum menu m;
int main()
{
    printf("%d %d",b+a,e+d);
}
3. What will be the output of following program ?

#include <stdio.h>
void main()
{  
    int a=10;
   switch(a){
        case 5+5:
            printf(“Pune\n”);
        default:
            printf(“Karad\n”);
    }
}
4. Find the output of the following:
int main()
{
    int m=1,n=1;
    if(--n && n || n--)
        printf("%d",m ^ n);
    else
        printf("%d",m & n);
}
5. What will be the output of following program ?
#include<stdio.h>
 int main()
 {
     char ch;
     if((~sizeof(ch) + !sizeof('A')))
           printf("Hinjewadi");
       else
          printf("MarketYard");
      return 0;
  }
6. Find the output of the following:
int main()
{
    int x=0,y=0,z=0;
    if(x!=3,y=!2,z==1,z)
        printf("x=%d y=%d",x,y);
        printf("x=%d y=%d z=%d",x,y,z);
}
7. #include <stdio.h>

int main()
{
 int var;

 var=5>7?6:1!=8<9?50:60;

 printf("%d", var);

 return 0;
}
8. What will be the output of following program ?

#include<stdio.h>
enum menu
{ a=2,b=3.56 };
enum menu m;
main()
{
    printf(“%d%d”,a,b);
}
9. What will be the output of following program ?
#include<stdio.h>
   
   int main()
   {
       char ch = 65;
       switch(++ch)
       {
           case 'A':
           printf("Hinjewadi\n");
          break;
          case 'B':
          printf("MarketYard\n");
          default:
          printf("Karad\n");
          break;
      }
  return 0;
  }
10. What will be the output of the program?

#include<stdio.h>
int main()
{
    int i=4;
    switch(i)
    {
        default:
           printf("sunbeam\n");
        case 1:
           printf("E-DAC\n");
           break;
        case 2:
           printf("E-DMC\n");
           break;
        case 3:
           printf("E-DBDA\n");
    }
    return 0;
}