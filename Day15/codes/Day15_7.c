#include<stdio.h>
#include<string.h> 
int mystrlen(const char *s); 
int main( )
{
    int res; 
    char name[50] ="Reader"; 
    //printf("%d",strlen(name)); 
    res = mystrlen(name); 
    printf("%d",res); 
    return 0; 
}
// R e a d e r \0 

int mystrlen(const char *s)
{
        int i = 0;
        while( *(s + i )!='\0')//*(100 + 0 )=>*(100)=> 
        {
                i++; 
        } 
        return i; 
}


