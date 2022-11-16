#include<stdio.h> 
/*
            cal area and circumference of circle 
            PI = 3.1412 
            area = PI * r * r; 
            cir  = 2 * PI * r;  
*/

int main( )
{   
    // variable declaration 
    float radius,area,cirumference; 

    //1.Input 
    printf("Enter the radius"); 
    scanf("%f",&radius);

    //2. Processing  
    //area = PI * r * r; 
    //cir  = 2 * PI * r;

    area = 3.1412 * radius * radius; 
    cirumference = 2 * 3.1412  * radius;      
     

    //3. Output 
    printf("area = %.2f\n",area); 
    printf("circumference = %.2f\n",cirumference); 

    return 0;
}

 