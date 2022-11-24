/*
1.  Write a function to indicate whether given number is prime or not.
 int is_prime(int n); // return 1 if prime and 0 if non-prime.
Write another function to print prime numbers in the given range.
void print_primes(int min, int max)


#include <stdio.h>

int check_prime(int num);

int main()
{

    int res,num, Final_res;
    printf("Enter Number : ");
    scanf("%d", &num);

    res = check_prime(num);
       printf(" ok %d\n" ,res);

    if (res == 2)
    {
        printf("Its Prime Number");
    }
    else
        printf("Its Not a Prime No ");

    return 0;
}

int check_prime(int num)
{
//    printf("In Prime Function");
    
int count=0;
    for (int i = 1; i <= num; i++)
    {

        if (num % i == 0)
        {
            count++;
        }

       
        // printf("%d\n" , count);
    }
     return count;
}

*/

#include<stdio.h>

int check_Factor(void);

int main(){

  
    int res ;
    
     check_Factor();
    // printf("%d",res);
  
    return 0;
}

int check_Factor(void){
     
     int num ;
     int count = 0;

     printf("Enter number : ");
     scanf("%d",&num);

      for(int i=1 ;i<=num;i++){
        // printf("Inside For LOop %d" , i);
        if(num%i==0){
            // count++;
            printf("%d" , i);
        }
      }
    //   return count;
     
}