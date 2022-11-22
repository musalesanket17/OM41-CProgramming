#include<stdio.h> 

int main( )
{
    enum operations 
    {
        ADD=1,SUBTRACT=2,MULTIPLY=3,DIVIDE=4
    }; 
    int num1,num2,result,op,ans; 
    
    //int choice;
    enum operations choice;  

    printf("1. Addition \n"); 
    printf("2. Subtraction \n"); 
    printf("3. Multiplication \n"); 
    printf("4. Division \n");
    printf("Enter the choice"); 
    scanf("%d",&choice); //1 

    printf("\n Enter the num1 and num2"); 
    scanf("%d%d",&num1,&num2);   

    
    switch(choice)
    {
        case ADD: 
        ans = num1 + num2; 
        printf("ans = %d",ans);
        break; 
        
        case SUBTRACT: 
        ans = num1 - num2; 
        printf("ans = %d",ans);
        break; 
        
        case MULTIPLY: 
        ans = num1 * num2; 
        printf("ans = %d",ans);
        break; 
        
        case DIVIDE: 
        ans = num1 / num2;
        printf("ans = %d",ans); 
        break; 
    } 
    

    return 0;  
}
// int main( )
// {
//     int num1,num2,result,op,ans; 
//     int ADD=1, SUBTRACT = 2, MULTIPLY = 3 , DIVIDE = 4; 
//     int choice; 

//     printf("1. Addition \n"); 
//     printf("2. Subtraction \n"); 
//     printf("3. Multiplication \n"); 
//     printf("4. Division \n");
//     printf("Enter the choice"); 
//     scanf("%d",&choice); //1   

    
//     switch(choice)
//     {
//         case ADD: 
//         ans = num1 + num2; 
//         break; 
        
//         case SUBTRACT: 
//         ans = num1 + num2; 
//         break; 
        
//         case MULTIPLY: 
//         ans = num1 + num2; 
//         break; 
        
//         case DIVIDE: 
//         ans = num1 + num2; 
//         break; 
//     } 
    

//     return 0;  
// }