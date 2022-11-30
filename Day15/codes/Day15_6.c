#include<stdio.h> 
#include<string.h> 
int main( )
{
    char str1[] = "Sunbeam infotech";
    //             Sunbeam infotech\0  
    char *str2 = "Sunbeam infotech"; 
    char str3[] = "Sunbeam\0infotech";
    //             Sunbeam\0infotech\0     
    
    // printf("%d\n",sizeof(str1)); // 17 
    // printf("%d\n",sizeof(str2)); // 4 or 8 
    // printf("%d\n",sizeof(str3)); // 17 

  // length => strlen( ) is a function that counts number of 
  // chars until \0 is encountered    

    // printf("%d ",strlen(str1)); // 16 
    // printf("%d ",strlen(str2)); // 16
    // printf("%d ",strlen(str3)); // 7  

     printf("%s \n",str1); 
     printf("%s \n",str2);
     printf("%s \n",str3);  

    return 0; 
}
// strlen => predefined 
// mystrlen( ); 
// geeksforgeeks.com 
