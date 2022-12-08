#include<stdio.h>
int main()
{
    //char str1[5]= {'A','B','C','D','E'}; // init list 
    // char array 

    //char str2[5] = {'a','b','c','d','\0'}; 
    // 5 char array terminated with \0 char => string 

    //char str3[5] = {'I','N','F','O'}; // partial init 
    // 5 char array terminating with \0 => string 
    // when array is init partially at the time of decln 
    // rest ele are init to 0 

    char str4[] = {'S','u','n','b','e','a','m'}; 
    char str10[] ="sanket" // Modified Acceptable
    // char array 

    

    int i;
    for( i = 0 ; i < 7 ; i++)
          putchar(str4[i]);   

    //  for( i = 0 ; str3[i]!='\0' ; i++)
    //       putchar(str3[i]);   
 
    // for( i = 0 ; str2[i]!='\0' ; i++)
    //       putchar(str2[i]);   

    for( i = 0 ; i < 5 ; i++)
          putchar(str1[i]);   

    return 0;
}

