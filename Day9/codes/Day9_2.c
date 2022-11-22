#include<stdio.h> 
int main()
{
    enum color 
    {
        RED=1,BLUE,GREEN 
      
    }; 
    //int choice;
      enum color choice;  
    printf("Enter the choice"); 
    scanf("%d",&choice);  //1 

    switch (choice)
    {
    case RED:                       //case 1:                         
        printf("Red color"); 
        break;
    case BLUE:                      //case 1:   
        printf("Blue color"); 
        break;
    case GREEN:                     //case 3: 
        printf("Green color"); 
        break;
    }
    return 0;
}

// int main()
// {
//     int choice;
//     printf("Enter the choice"); 
//     scanf("%d",&choice);  

//     switch (choice)
//     {
//     case 1: 
//         printf("Red color"); 
//         break;
//     case 2: 
//         printf("Blue color"); 
//         break;
//     case 3: 
//         printf("Green color"); 
//         break;
//     }
//     return 0;
// }
