#include<stdio.h> 

int main( )
{
    //enum => user defined datatype 
    // int,float,char,double 
    // int a,b,c;
     
    // enum color // created a datatype  
    // {
    //     RED,BLUE,GREEN 
    // }; 
    // enum color c1,c2,c3; 
    
    enum // annonymous enum 
    {
        RED,BLUE,GREEN 
    }c1,c2,c3;  
    
    //  enum color 
    //  {
    //      RED,BLUE,GREEN 
    //  }; 
    //  enum color1  
    //  {
    //      RED,BLUE,GREEN 
    //  };
      

    return 0; 
}

// int main( )
// {
//     //enum => user defined datatype 
//     // int,float,char,double 
//     // int a,b,c;
//     int a = 10; 
//     enum color // created a datatype  
//     {
//          RED,BLUE,GREEN 
//         //RED=1,BLUE=2,GREEN=3 
//         //RED=1,BLUE=2,GREEN=3,VIOLET  
//         //RED=-1,BLUE,GREEN,VIOLET  
//         //RED=-1,BLUE,GREEN=-1,VIOLET  // OK  
//          //RED=1.5,BLUE,GREEN=-1,VIOLET // NOT OK   
//          //RED='A',BLUE,GREEN=-1,VIOLET  
//          //RED = a + 1 ,BLUE,GREEN=-1,VIOLET  
//            //RED,BLUE,GREEN,red
//          //RED,BLUE,GREEN,RED  // NOT OK        
//     }; 

    
//     // datatype variable-name 
//        enum color c1; 
//        //enum color => datatype 
//        // c1 => variable name
//        printf("%d",sizeof(c1));  
     
      

//     return 0; 
// }

// int main( )
// {
//     //enum => user defined datatype 
//     // int,float,char,double 
//     // int a,b,c;

//     enum color // created a datatype  
//     {
//         RED,BLUE,GREEN,VIOLET 
//     }; 

//     // datatype variable-name 
//        enum color c1; 
//        //enum color => datatype 
//        // c1 => variable name

//      //c1 = RED; 
//      // RED++; // 0++ => 0 = 0 + 1 
//      //c1++ => 0 => 1 
//      //c1 = BLUE; 
//      //c1 = GREEN;   
//      printf("%d %d %d",BLUE,GREEN,RED); 
//      //printf("%d",c1);    

//     return 0; 
// }
/*
        enum IPL 
        {
            MI , RR , CSK
        }; 

*/