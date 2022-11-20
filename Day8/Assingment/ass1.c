#include<stdio.h>

int main(){
  
    int month; 
    printf("Enter Month NO : ");
    scanf("%d" , &month);

    switch (month)
    {
       
        case  1: printf("IN This Month '31' Days");
                 break;
        case  2:printf("IN This Month '28/29' Days");
                 break;
        case  3: printf("IN This Month '31' Days");
                 break;
        case  4: printf("IN This Month '30' Days");
                 break;
        case  5: printf("IN This Month '31' Days");
                 break;
        case  6 : printf("IN This Month '30' Days");
                 break;
        case  7: printf("IN This Month '31' Days");
                 break;
        case  8: printf("IN This Month '30' Days");
                 break;
        case  9: printf("IN This Month '31' Days");
                 break;
        case  10: printf("IN This Month '30' Days");
                 break;
        case  11: printf("IN This Month '31' Days");
                 break;
        case  12: printf("IN This Month '30' Days");
                 break;

    default:
        break;
    }
     
    return 0;
}