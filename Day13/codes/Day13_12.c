#include<stdio.h> 
int arr[5];  //  0 
int main( )
{
    // array ( 1D array )
    //int num1=1,num2=2,num3=3,num4=4,num5=5;

     int arr[5] = {1,2,3,4,5}; // init list 
    //int arr[5] = {1,2}; // partial init 
    //int arr[5];  // Garbage 
     //int arr[] = {1,2,3,4,5}; 
    //int arr[];  // NOT OK 
    // int arr[5] = { 1,2,3,4,5,6,7,8,9}; 
    /*
            array index always starts from 0 to n-1 

       arr      

             1     2     3     4     5  
            [0]   [1]   [2]   [3]   [4]
            100   104   108   112   116

        

    */
  
    int index; 
    for( index = 0 ; index < 5 ; index++)
            printf("%d ",arr[index]); 
    return 0; 
}
/*
    int n; 
    scanf("%d",&n); // 10  
    int arr[n];

    Array size must be given at compile time  

    1.Compile time ( static ) 
      int arr[100] = {1};
      // 100 * 4 => 400 bytes  

    2.Runtime (dynamic )
     Dynamic memory allocation  

*/