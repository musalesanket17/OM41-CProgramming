#include<stdio.h> 

struct A 
{
    int a; 
}; 
struct B 
{
    int b;  
}; 
int main( )
{
    struct A a = {1}; 
    struct B b; 
    //b = a; // NOT OK   
    return 0; 
}
// struct book 
// {
//     int id; // 4  
//     char name[20];//20  
//     char author[20]; //20 
// }; 
// int main( )
// {
//     struct book b1 = { 1, "Cprogramming","DennisRitchie"}; 
//     struct book b2; 
//     b2 = b1; 
//     //printf("%d %s %s",b2.id,b2.name,b2.author);   
//     // if(b2 == b1)
//     //     printf("same"); 
//     // if(b2.id == b1.id)
//     //     printf("same"); 
//     return 0; 
// }