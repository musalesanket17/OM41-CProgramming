#include<stdio.h> 

int main(int argc, char const *argv[],char *envp[])
{
    int i; 
    for ( i = 0 ; i < envp[i]!=NULL ; i++)
            puts(envp[i]); 
    //last entry of envp is null         
    return 0;
}
