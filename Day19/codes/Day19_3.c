#include<stdio.h> 
#include<string.h> 

//Global declaration 
// Blue-print
struct emp  
{
    int empno;  // 4 
    char name[20]; // 20 
    double salary; // 8 
};

int main( )
{
    // int x[5] = {1,2,3,4,5};// array of int 
    struct emp arr[3] = {
                  {1,"Ketan",1000.00}, // arr[0]
                  {2,"Aditya",2000.00},// arr[1]
                  {3,"Amit",3000.00}  // arr[2]
    };

    //arr[0].empid; => 1 
    //arr[1].name => aditya 
    int i; 
    for(i = 0 ; i < 3 ; i++)
    {
        printf("%d %s %.2lf\n",arr[i].empno,arr[i].name,arr[i].salary);  
    } 

    return 0; 
}