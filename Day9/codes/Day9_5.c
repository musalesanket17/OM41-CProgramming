#include<stdio.h> 

int main( )
{
    // alias => nickname 
    // typedef => alias => datatype 
    //int a; 
    
    typedef int INT;
    INT a; // int a   
    
    enum color 
    {
        RED,BLUE,GREEN 
    }; 

    enum color c1;  

    typedef enum color e_c;  

    e_c c2,c3,c4; 
    //e_c => enum color  

    size_t a; 
    // unsigned long long a;    

    return 0; 
}