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

int main()
{

    // local structure 
    struct student 
    {
        int rollno; 
        int marks; 
    }; 

    //int a,b,c,d; 
    // int 
    // int x = 1 ; // init  
    struct emp e1 = {1,"Ketan",1000.00};
    //struct emp => datatype 
    // e1 => variable / object
    struct emp e2 = {2,"Aditya"}; 
    struct emp e3; 
    struct emp e4; 
    struct emp a1,a2; 
    //printf("%d %s %.2lf",e1.empno,e1.name,e1.salary);      
    /*
            int a = 10; 
            int *p = &a; 
    */
    struct emp *p  = &e1;// scale factor => 32 bytes   
    
    //printf("%d %s %.2lf",p->empno,p->name,p->salary); 
    /*
        int a; 
        a = 10; // assignment 
    */
    // e3.empno = 3;  
    // strcpy(e3.name,"Rahul");
    // e3.salary = 2000.00;  
    // printf("%d %s %.2lf",e3.empno,e3.name,e3.salary); 
    
    printf("Enter empno name and salary "); 
    scanf("%d%s%lf",&e4.empno,e4.name,&e4.salary); 

    printf("%d %s %lf",e4.empno,e4.name,e4.salary); 

    return 0;
}
