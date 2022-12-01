#include<stdio.h> 
int main()
{
    int a = 5; 
    int b = 10; 
    int c = 15;
    // int *p1 , *p2 , *p3;

    int *pa[3]; // array of pointers    
    
    pa[0] = &a; 
    pa[1] = &b; 
    pa[2] = &c; 

    int i; 
    for( i = 0 ; i< 3 ; i++)
        //printf("%u ",pa[i]);   
      printf("%u ",*pa[i]);     
    
    return 0;
}
