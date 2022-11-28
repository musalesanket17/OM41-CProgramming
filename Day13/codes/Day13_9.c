#include<stdio.h> 

void fun( int **p )
{
        printf("%d ",**p); // 10  
        **p = **p + 20;
        //     10  + 20   
        /*
            **p 
            valueat(valueat(p))
            valueat(valueat(500))
            valueat(100)
            10 
        */
}

int main()
{
    
    int num = 10; 
    int *p = &num; 
    fun( &p );
    printf("\nInside the main %d",num); 
    printf("\nInside the main %d",*p);  
    return 0;
}
