#include<stdio.h> 

int main( )
{
    int num; 
    char *numbers[] = {"zero","one","two","three","four","five"}; 
    printf("%d",sizeof(numbers)); // 4 * 6 => 24 
    printf("Enter the num"); 
    scanf("%d",&num); // 0
    printf("%s",numbers[num]); // numbers[0] 
    return 0; 
}



/*
        char *str1 = "Ketan"; 
        char *str2 = "Rahul";
        char *str3 = "Sunbeam";

        char *str[] = { "Ketan" , "Rahul","Sunbeam" };   

*/