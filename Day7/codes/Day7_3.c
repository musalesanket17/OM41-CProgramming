#include<stdio.h> 

/*
        infection count >=1000 => impose lockdown 

*/


int main( )
{
    int count; 
    int result;//Modified
    //1.Input 
    printf("Enter the count");
    scanf("%d",&count); //1000  

    //2. Processing  
    if(count>=1000) // if(1000>=1000) // if(1)
    {   
        printf("Impose the lockdown"); 
    }
    else 
    {
        printf("No lockdown"); 
    }
     

    return 0; 
}
/*
        // relational opr => < , > , <= , >= , != , == 
        // logical opr => && , || , !

     if (is it raining outside)    
            Carry the raincoat 
     else 
            dont carry 

*/