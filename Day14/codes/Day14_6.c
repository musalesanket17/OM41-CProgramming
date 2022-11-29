#include<stdio.h> 

void printArray( int *ptr); 
int main( )
{
    int arr[4] = {100,200,300,400}; 
    printf("Array elements are \n"); 
    printArray(arr);
    printf("\n");  
    int i; 
    for ( i = 0 ; i < 4  ; i++)
            printf("%d ",arr[i]); 
    return 0; 
}
void printArray( int *a)
{
    int i; 
    for( i = 0 ; i < 4 ; i++ )
          printf("%d ",a[i]); // 100 200 300 400 
    for( i = 0 ; i < 4 ; i++ ) // Increment 
            a[i]++; //a[0]++ => *(a + 0 ) => *(500 + 0 )  => *(500) => 100 => 101 
}

/*

        1     2    3    4    5 
       [1]   [2]  [3]  [4]  [5]
       100   104  108  112  116 

       arr[1] ==> 1 

       *(arr + 1 )
       *(100 + 1)
       *(104)
         => 2   


*/