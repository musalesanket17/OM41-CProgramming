#include<stdio.h>

int main( )
{
    // width specifier
    //int num = 10; 
    //printf("          %d",num);
    //printf("%d        ",num);
    //printf("%10d",num); // right justified 
    //                 1 0 
    // - - - - - - - - - -      
    //printf("%-10d",num); // left  justified 
     // 1 0 
     // - - - - - - - - - - 
    //printf("%010d",num); // right justified 
    //                 1 0 
    // - - - - - - - - - - 
    
    float fvar = 12.3; 
    //printf("%f",fvar);

    //printf("%6.2f",fvar);  
    //   1 2 . 3 0   
    // - - - - - -     

    //printf("%-6.2f",fvar);  
    // 1 2 . 3 0   
    // - - - - - -     

    //printf("%06.2f",fvar); // right justified   
    // 0 1 2 . 3 0   
    // - - - - - -     
    
    //printf("%.2f",fvar);  

    //printf("%.f",fvar); //12   

     printf("%*.*f",10,2,fvar); 
     //      %10.2f   

     //              1 2 . 3 0  
     //    - - - - - - - - - - 

    //int val = 10; 
    //printf("%*.*f",val,val-8,fvar);
    //             10,  2
    //      %10.2f

    return 0; 

}

// IDE ==> integrated dev envn 
// IDE ==> vscode, eclipse , turboc , devc++ 

/*
        123.345 
        %10.2f 
                1 2 3 . 3 4 
        - - - - - - - - - - 

        

*/