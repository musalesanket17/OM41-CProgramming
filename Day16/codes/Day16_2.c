#include<stdio.h> 

int main( )
{
    int arr[4] = {5,10,15,20};
    int *pa[4]; 
    int i; 

    //pa[0] = &arr[0]; 
    for(i = 0; i < 4 ; i++)
        pa[i] = &arr[i];  
    for(i = 0; i < 4 ; i++)
        //printf("%u ",pa[i]);
        //printf("%u ",*pa[i]);
        printf("%u ",&pa[i]);  
    return 0; 
}