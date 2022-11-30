1.#include<stdio.h>
int main( void )
{
    int arr[]={111,222,333,444,555};

    printf("%d",-2[arr]);  // arr[2] ==> 2[arr] 

    return 0;
}

A. 333
B. 222
C. Compiler error
D. -333

Answer: D

2.
#include<stdio.h>
void callbyaddress(float *ptr_val)
{
    *ptr_val= 3.0f * *ptr_val;
    return;
}
int main( void )
{
    float val=3.142f;
    float * const strVal = &val;
    callbyaddress(&val);
    printf("%.1f",*strVal);
    
    return 0;
}

A. 3.1
B. 6.2
C. 9.4
D. compile time error
E. 9.3

Answer: C

3.#include<stdio.h>
signed char* convert(unsigned int *data)
{
    return ((signed char*)(data));
}
int main( void )
{
    unsigned int a = 545;
    signed char *data=NULL;
    data =convert(&a);
    printf(" %d ",*data*2);
    
    return 0;
}


A. 66
B. B
C. A
D. 65

Answer: A

4.#include<stdio.h>
int main()
{
	int arr[10]={1 ,2 ,3 ,4 ,5 };
	int *ptr=&arr[8];
	printf("-%d", *(ptr-5));
   	return 0;
}
A. 4
B. -3
C. -5
D. -4
Answer: D

	*(412 ) 

// &arr[0] = 400 (assume)
// &arr[8] = 432 (8 ints will take 32 bytes, so base address + 32)
// ptr = &arr[8] = 432
// ptr - 5 = ptr - 5 * scale factor(ptr) = ptr - 5 * 4 = 432 - 20 = 412
// *(ptr - 5) = * 412 = 4
// -4



******************************
#include<stdio.h>
signed char* convert(unsigned int *data)
{
    // 0000 0010 0010 0001
    
    return ((signed char*)(data));
    // 0010 0001 ==> 33 
       
}
int main( void )
{
    unsigned int a = 545;
    // 0000 0010 0010 0001
    signed char *data=NULL;
    data =convert(&a);
    printf(" %d ",*data * 2); // 33 * 2  ==> 66 
    
    return 0;
}



***************



5.
#include<stdio.h>
void abc(int arr[])
{
    printf("%c", *++arr-32);
    printf("%c", *arr++-32);
}
int main()
{
    int arr[100];
	
    
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[4] = 'd';
    
    abc(arr);
    
    return 0;
}

A. BB
B. BC
C. CC
D. CD

Answer :A

**************************************
	

#include<stdio.h>
void abc(int arr[])
{
    printf("%c", *++arr-32); // 98 - 32 ==> 66 ==> B  
    printf("%c", *arr++-32); // 98 - 32 ==> 66 ==> B  

}
int main()
{
    int arr[100];
    
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[4] = 'd';
    
    abc(arr);
    
    return 0;
}
**************************************
