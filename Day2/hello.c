/*
   This is a multiline comment in the C program 
   Comments are ignored the compiler 
   They are used for documentation or explaination about the program 

*/
// This is a single line comment 

#include<stdio.h> // header file inclusion 
// stdio.h header file contains standard function declaration 
// we will function in detail in function topic 

//main( ) is entry point function in C 
// execution begin from main( )
// program must have main function  at least 
// void ==> nothing 
int main(  ) // user defined function 
{ 
     
    //printf( ) is used to print some data/string on terminal
    // data=> character,integers
    // string => "Hello" => string , "A" ==> string 
    // "Sunbeam info"=> string 
    // 'A' => character 
    // "A" => String  
    printf("Hello world");  
    // return 0 indicates successful execution of the program 
    // non zero value indicates failure 
    // return ==> jump statment 
    return 0; 
}

// 1.compilation ==> gcc hello.c ( Yes ) 
// 2.execution ==> .\a.exe ( Yes )

// windows ==> .\a.exe 
// linux  ==> ./a.out 

// function ==> set of instructions 
// add ==> addition 

// functions ==> 1. Declaration  2.Defination 

// function => ( )

// OS ==> main 

// Compilation ==> Top to bottom 
// Execution ==> main( )

/*

    int main( void )
    {
 
           12 / 0;  // Program fail / crash  ( runtime error )
  

        return 0;  

        // 0 => integer  
    }
    
    // OS ==> main( )

// 1 Compilation ==> Yes ( a.exe )
// 2.Execution ==> Yes 


// function ==> input 



*/
/* 
    // standard decln of main 
    int main( void  )
    {
        return 0; 
    }
    // non standard decln of main 
    void main( )
    {
            //function not returning anything 
            //in this case 0 is returned automatically 
    }

     
*/