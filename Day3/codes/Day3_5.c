#include<stdio.h> 

int main()
{
    int num = 12;
    double dvar = 12.3; 
    char ch = 'A'; 
    // sizeof() ==>  it gives size in bytes
    // size ==> 1,4,8 ( integer ) => %d 
    printf("int =%d\ndvar = %d\nchar = %d",sizeof(num),sizeof(dvar),sizeof(ch)); 
    return 0;
}
/*
    int ==> 4 byte ==> 32 bit 
    double ==> 8 byte ==> 64 bit 
    char ==> 1 byte ==> 8 bits 

*/
