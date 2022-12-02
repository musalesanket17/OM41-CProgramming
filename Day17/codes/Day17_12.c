#include<stdio.h> 
void printArray( int arr[3][3]); 
void readArray( int arr[3][3]); 
int main( )
{
    int arr[3][3]; 
    readArray(arr); 
    printf("Array elements are \n"); 
    printArray(arr); 
    return 0; 
}
void printArray( int arr[3][3])
{
        int r,c; 
        for( r = 0 ; r < 3 ; r++)
        {
            for( c= 0 ; c< 3 ; c++)
            {
                printf("%4d",arr[r][c]); 
            }
            printf("\n"); 
        } 
}
void readArray( int arr[3][3])
{
        int r,c; 
        for( r = 0 ; r < 3 ; r++)
        {
            for( c= 0 ; c< 3 ; c++)
            {
                scanf("%d",&arr[r][c]); 
            }
        } 
}

