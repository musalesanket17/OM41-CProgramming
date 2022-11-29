#include<stdio.h> 

int main( )
{
    //int *ptr; // wild pointer 

    //int *ptr = NULL; // NULL pointer 
    
    int num = 10; 
    float fvar = 12.3; 
    double dvar = 10.3; 
    char ch = 'A'; 
    
    void *ptr = &num;  // Generic pointer 
    printf("%d\n",*(int*)ptr); 

    ptr = &fvar;  
    printf("%.2f ",*(float*)ptr); 

    ptr = &dvar;      
    printf("%.2lf ",*(double*)ptr);

    ptr = &ch;  
    printf("%c ",*(char*)ptr);


    return 0; 
}

// void* malloc(size_t size); // dynamic memory allocation 