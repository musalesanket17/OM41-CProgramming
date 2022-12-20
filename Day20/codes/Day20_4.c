#include<stdio.h>
#include<stdlib.h> 

int main( )
{
    FILE *fptr; 
    char ch; 
//A file pointer ( stream pointer ) is pointer to structure of type FILE 
//file pointer points to this strucuture (identfies the file )

    if( ( fptr = fopen("sunbeam.txt","w")) == NULL )
    {
            printf("Error"); 
            exit(1); 
    }
    printf("Enter the text\n");

    while( ( ch = getchar())!=EOF)
    {
            fputc(ch,fptr); 
    } 
    fclose(fptr); 


    return 0; 
}
