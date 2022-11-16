#include<stdio.h>

int main(){
//  Q1.
    // printf("%d %d %d %d %d ",'\n', '\r', '\t', '\a', '\b');

// Q2.
 /*
  int num ;
  printf("Enter A Number : ");
  scanf("%d" , &num);

   for(int i=1 ; i<11 ; i++){
     
      printf("%d \n" , num *i);
   }


*/

// Q3  . 

   int num1,num2,num3;
   float avg ;

   printf("Enter Three No : ");
   scanf("%d%d%d" , &num1,&num2,&num3);

   avg = num1+num2+num3 / 3;

   printf("%10.2f" , avg);

    



 
    return 0;
}