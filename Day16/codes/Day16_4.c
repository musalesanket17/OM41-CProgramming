#include<stdio.h>
// command line argument
// char *numbers[];   
int main(int argc, char *argv[])
{
    //.\a.exe one two three 
    // argc => argument count 
    // argv => argument vector 
    //printf("%d",argc); 
    
    // .\a.exe 1 2 3 
    // printf("%s ",argv[0]); 
    // printf("%s ",argv[1]); 
    // printf("%s ",argv[2]);
    // printf("%s ",argv[3]);  

    int i; 
    for( i = 0 ; i < argc ; i++)
    {
            puts(argv[i]); 
    }

    return 0;
}
//atoi() => string to int 
