#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num;  // 4 bytes 

    *ptr = 20; 

    char ch = 'A'; 
    char *cptr = &ch; // 4 bytes 
    *cptr = 'B'; 

    float fvar = 11.3; 
    float *fptr = &fvar; // 4 bytes 

    double dvar = 10.3; 
    double *dptr = &dvar;  // 4 bytes  

    //printf("%d %c %.2f %.2lf",*ptr,*cptr,*fptr,*dptr); 

    // scale factor 
      printf("%d ",sizeof(*ptr)); // 4
      printf("%d ",sizeof(*cptr)); // 1 
      printf("%d ",sizeof(*dptr)); // 8 
      printf("%d ",sizeof(*fptr)); // 4

    return 0; 
}
/*
        double *ptr = &a; 
        *ptr; => 8 byte  
*/