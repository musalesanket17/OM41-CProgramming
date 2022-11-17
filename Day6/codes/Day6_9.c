#include<stdio.h> 

int main( )
{
    // logical operators 
    // || , && , !
    // || => logical OR => T or F
    // && => logical AND => T or F 
    // ! => logical NOT => T or F 

    // T ==> non-zero => 1,12,13,-1,-2
    // F ==> 0 => false 
    // printf("%d ",10 && 13); 
    // //            T && T  => T => 1    
    // printf("%d ",10 && 0);
    // //            T && F  => F => 0    
    // printf("%d ",0 && 10);
    // //           F && T   => F => 0 
    // printf("%d ",0 && 0);
    // //           F && F   => F => 0  

    // printf("%d ",10 || 13); 
    // //            T || T  => T => 1    
    // printf("%d ",10 || 0);
    // //            T || F  => T => 1    
    // printf("%d ",0 || 10);
    // //           F || T   => T => 1 
    // printf("%d ",0 || 0);
    // //           F || F   => F => 0  

    // logical NOT =>!
    // T =>!T => F 
    //printf("%d",!10);   
    // 10 ==> nonzero => T ==> !T => F => 0  
    //printf("%d",!-10);  
    // -10 => -ve => T => !T => F => 0
    printf("%d",!!10);    
    // 10 => T => !!10 => ! !T =>  !F => T => 1  
    return 0; 
}

/*
        marks>10 && marks<20  ==> Eligible 
           T     &&   T   => T => 1 
           T     &&   F   => F => 0 
           F     &&   T   => F => 0 
           F     &&   F   => F => 0        

        marks>10 || marks<20  ==> Eligible
           T     ||   F   => T => 1
           F     ||   T   => T => 1
           T     ||   T   => T => 1
           F     ||   F   => F => 0   

    int a = 1; 
    int b = 2; 
    a!=b => relational opr => 1 

    a =!b => Logical opr => logical not 
    a = !T => F
    a = 0  

*/