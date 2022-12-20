#include<stdio.h> 
//#pragma pack(1)
struct test 
{
    int a; //4 
    char b; // 1 
    double d1; // 8  
    int c; // 4 
};// 4 + 1 + 8 + 4 => 17 ( 8 , 16 , 24  )
// struct test 
// {
//     int a; //4 
//     char b; // 1 
//     int c; // 4 
// };// 4 + 4 + 1 => 9 
// 12 => ( 3 bytes )
// struct test 
// {
//     int a; //4 
//     char b; // 1 
// }; 
int main( )
{
    printf("%d",sizeof(struct test)); 
    return 0; 
}