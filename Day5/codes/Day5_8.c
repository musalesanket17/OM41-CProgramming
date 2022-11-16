#include<stdio.h> 

int main( )
{
    int num; 
    char ch; 

    printf("Enter int and char");
    //scanf("%c%d",&ch,&num); 
    scanf("%d%*c%c",&num,&ch); 

    printf("%c %d",ch,num);   
    return 0; 
}

// int main( )
// {
//     int num; 
//     char ch; 

//     printf("Enter the int"); 
//     scanf("%d",&num);

//     printf("Enter the character"); 
//     scanf("%*c%c",&ch);

//     printf("%c %d",ch,num);   
//     return 0; 
// }

// int main( )
// {
//     int num; 
//     char ch; 
//     printf("Enter the character"); 
//     scanf("%*c%c",&ch);

//     printf("Enter the int"); 
//     scanf("%d",&num);

//     printf("%c %d",ch,num);   
//     return 0; 
// }

// int main( )
// {
//     char ch; 
//     printf("Enter the character"); 
//     scanf("%*c%c",&ch);

//     printf("%c",ch);  
//     return 0; 
// }
// newline ==> \n => '\n' (char ) => 10 