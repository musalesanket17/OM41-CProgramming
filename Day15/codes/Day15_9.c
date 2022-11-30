#include<stdio.h> 

int main( )
{
    // char str1[20] = "Sunbeam";
    // char str2[20] = "Sunbeam";
    // if( str1 == str2) // comparing addresses ( strcmp( ))
    //     printf("Same"); 
    // else 
    //     printf("not same"); 

    //char *str1 = "Info"; // pointer to string 
    //char *str2 = "Info"; // pointer to string  
    // if( str1 == str2) 
    //     printf("Same"); 
    // else 
    //     printf("not same"); 

    //printf("%u ",str1);//100 
    //printf("%u ",str2);//100  

    //printf("%s",str1); 

    //  char str1[20] = "Sunbeam";
    //  str1[0] = 'K'; 
    //  printf("%s",str1);    
     
    //char *str1 = "Info"; // pointer to string 

    //str1[0] = 'K';// *(str1 + 0) => *(100 + 0 )=> *(100)  
    // Trying to modify the RO data section => runtime error 
    //printf("%s",str1);  // Runtime error 
    
    char str5[20] = "Sunbeam"; 
    //printf("%s",str5); 

    printf(str5); 
    printf("\n"); 
    printf(str5+1);
    printf("\n");  
    printf(str5+2);
    printf("\n");
    printf(str5+3);

    return 0;  
}
