#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data; 
    struct node *ptr; // self referenctial pointer  
}node_t;

int main( )
{   
    //int *ptr; 
    //ptr = (int*)malloc(sizeof(int)); 
    
    //node_t *ptr; 
    //ptr = (node_t *)malloc(sizeof(node_t));  
    
    return 0; 
}
//ptr = (struct node  *)malloc(sizeof(struct node ));  