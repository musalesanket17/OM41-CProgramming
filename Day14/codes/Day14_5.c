#include<stdio.h> 
void readArray( int *ptr); 
void printArray( int arr[]); 
int main( )
{
    int arr[5]; 
    printf("Enter the array elements"); 
    readArray(arr); // Base address 
    printf("Array elements are \n"); 
    printArray(arr); 
    return 0; 
}
// pointer notation 
void readArray( int *ptr)
{
    //ptr++; // OK 
    //printf("%d",sizeof(ptr)); // 4 or 8 ( pointer ) 
    int i; 
    for( i = 0 ; i < 5 ; i++ )
          scanf("%d",&ptr[i]);   
}
void printArray( int arr[])
{
    //arr++; // OK 
    //printf("%d",sizeof(arr)); // 4 or 8 ( pointer ) 
    int i; 
    for( i = 0 ; i < 5 ; i++ )
          printf("%d ",arr[i]);   
}
