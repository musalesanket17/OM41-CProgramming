#include<stdio.h> 

int main( )
{
    int num1 = 10; 
    int num2 = 20; 
    /*
        if(num1>num2)
           //ans = num1 
        else 
           //ans = num2     
    */
    int ans; 
    ans = num1>num2 ? num1 : num2;
    //      condtn  ? exp1 : exp2
    //       10>20  ?      :    
    printf("ans = %d",ans); // 20     
    return 0; 
}
/*
            nested condtn operator 
            num1,num2,num3 

ans = num1>num2 ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3 );  
//      codtn   ?          exp1                 :           exp2     



greatest of a,b,c 

  a>b && a>c ? printf("%d",a) : ( b > c ? printf("%d",b) : printf("%d",c));

  max = a>b && a>c ? a : ( b > c ? b : c ); 
  printf("max = %d",max);        





*/