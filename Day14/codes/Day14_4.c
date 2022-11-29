#include<stdio.h> 
void readArray( int arr[]); 
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
// array notation 
void readArray( int arr[])
{
    //arr++; // OK 
    //printf("%d",sizeof(arr)); // 4 or 8 ( pointer ) 
    int i; 
    for( i = 0 ; i < 5 ; i++ )
          scanf("%d",&arr[i]);   
}
void printArray( int arr[])
{
    //arr++; // OK 
    //printf("%d",sizeof(arr)); // 4 or 8 ( pointer ) 
    int i; 
    for( i = 0 ; i < 5 ; i++ )
          printf("%d ",arr[i]);   
}
