#include<stdio.h> 

/*
        cal peri of rectangle 
        peri = 2 * ( len + breadth )
*/
int main( )
{   
     
     // variable declaration 
    double length,breadth,peri; 

    //Input 
    printf("Enter the length and breadth"); 
    scanf("%lf%lf",&length,&breadth); 

    //processing 
    //peri = 2 * ( len + breadth )
     peri = 2 * ( length + breadth);

    //Output 
    printf("peri = %.2lf",peri); 
     // REsult give in Double 
     // size of double 8

    return 0; 
}

 