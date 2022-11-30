#include<stdio.h>
#include<string.h> 
char* mystrcpy(char *dest, const char *src); 
int main( )
{
    char src[50] ="Reader"; ; 
    char dest[50]; 
    char *p;  
    
    //strcpy(dest,src);
    p = mystrcpy(dest,src);  
    printf("%s",p); 
    //puts(dest);  

    return 0; 
}
// src   => H  e  l  l  o  \0 
// dest  => H  e  l  l  o  \0  

char* mystrcpy(char *dest, const char *src)
{
     int i = 0; 
     while( src[i]!='\0')
     {
           dest[i] = src[i];
           i++;  
     }
     dest[i]= '\0';
     return dest;  
}

// int *p; 
// p = fun( ); 
// int* fun( ); 

