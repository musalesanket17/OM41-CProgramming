#include<stdio.h> 

//Stringizing operator => # 

#define PRINT(x) puts(#x)
#define PRINT_VAR(var) printf(#var " = %d",var)

//Token pasting operator (##)

#define PRINT_SAL(a,b) printf("sal = %d\n",a##b)

int main( )
{
    //puts("Hello world"); 
    
    //PRINT(Hello world); 
    //puts("Hello world"); 

    //int adventure = 50; 
    //PRINT_VAR(adventure); 
    //printf("adventure" " = %d",adventure)
     
     int basicsalary = 500; 
     PRINT_SAL(basic,salary); 
     //printf("sal = %d\n",basicsalary)
    return 0; 
}