/*
3. Write a program that will calculate the price for a quantity entered 
from the keyboard, given that the unit price is Rs.5 and there is a 
discount of 10 percent for quantities over 30 and a 15 percent 
discount for quantities over 50.
*/

#include<stdio.h>

int main(){

     int Quantity=0,price=0,Final_price=0 ;

     printf("Enter Product Quantity : ");
     scanf("%d" , &Quantity);

     for(int i=1 ; i<= Quantity ;i++ ){
          price +=5;
     }
    //  printf("%d %d", price,Quantity);

     if(Quantity >= 30 ){
        Final_price = price /100 * 10 ;
        Final_price = price - Final_price ;
        printf("10%% Discount Final Price = %d" , Final_price);
     }
     else if(Quantity >= 50){
        Final_price = price/100 * 15 ; 
        Final_price =price  - Final_price;
        printf("15%% Discount Final Price = %d" , Final_price);
     }
     else{
        Final_price = price;
        printf("Final Price = %d" , Final_price);
     }

    return 0;
}