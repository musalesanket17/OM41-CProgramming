#include<stdio.h> 

int main( )
{
    // increment / decrement operator 
    /*
            int num1; 
            num1 = num1 + 1; 
            num1+=1; 
    */
    // increment operator => ++ ( increment by 1 ) 
    // decrement operator => -- ( decremented by 1 )

    // int ans;
    // int num = 2; 
    // ans = num; 
    // printf("%d %d",ans,num); // 2 2  

    // int ans;
    // int num = 2; 
    // ans = ++num; // increment => preincrement 
    // printf("%d %d",ans,num); //3 3   

    // int ans;
    // int num = 2; 
    // ans = num++; // increment => postincrement 
    // printf("%d %d",ans,num); //2 3   

    // int ans;
    // int num = 2; 
    // ans = --num; // decrement => predecrement 
    // printf("%d %d",ans,num); //1 1   

    int ans;
    int num = 2; 
    ans = num--; // decrement => postdecrement 
    printf("%d %d",ans,num); //2 1   


    return 0; 
}
/*
        num = 2; 
        ++num++; // LValue error 

        3++ => 3 = 3 + 1  // lvalue error 

        2++ ,1++ , 4++; // lvalue error 

        a++ + a++ + ++a; // compiler dependent    
        printf("%d%d%d",++a,a++,++a); // compiler dependent 

*/