#include<stdio.h>

int main(){
 
 /*
   int a=3 ,b=6;
printf("%d", a=b);
printf("%d", a==b); 
printf("%d", a!=b);
printf("%d", a=!b);


 int a=-10 , b=3,c=0 ,d;

 d=a++ || ++b && c++ ; 
 printf("%d%d%d%d" , a,b,c,d );
 

  char a=255 , b=127;
  b=~b;
  a=a^b;
  printf("\n%d, %d", a, b);
  

 printf("%d", 1| 3 %2 );

 int a=(1,2,3);
 int b=(++a , ++a,++a);
 int c=(b++ ,b++ ,b++);
 printf("%d%d%d",a,b,c);

//  printf("%d", ++4);

   int a=3,b=6;
   printf("%d", a!=b?0?b:a:b);
  
    int a=3;
    while (a--)
    {
        printf("%d",a);
    }
      

      int a=1000000L;
      for( a=1 ; a<10 ;a++);
      {
     printf("%d", a);
      }
       */

      int i,j;
      for(i=1;i<=3;i+=2){
        for(j=1;j<=3;j+=2){
            printf("%d",i+j);
        }
      }
    return 0;
}