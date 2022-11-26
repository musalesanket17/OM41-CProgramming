1.
#include <stdio.h>
int num;
int function(int n)
{
	int num = 100;
	return num;
}
int main(void)
{
	printf("%d %d\n", num, function(200));
	return 0;
}

A. 100 0
B. 200 0
C. 0 100
D. 0 200

Answer: C


2.
#include <stdio.h>
int testDemo(int, int);
int main(void)
{
	int you = 64, me = 32;

	int we = testDemo(you, me);

	printf("%d %d %d\n", me, you, we);

	return 0;
}
int testDemo(int me, int you)
{
	me = me + you;
	return me - you;
	you = you - me;
	return me + you;
}

A. 32 64 32
B. 64 64 32
C. 64 32 64
D. 32 64 64

Answer: D

3.
#include <stdio.h>
int value = 0;
int function(void)
{
	auto int value  = 1;
	printf("%d ", value);
	{
		int value = 2;
		printf("%d ", value);
		{
			value += 1;
			printf("%d ", value);
		}
		printf("%d ", value);
	}
	printf("%d ", value);
	return 0;
}
int main(void)
{
    function();
    return 0;
}

A. 0 1 2 2 0
B. 1 2 3 2 1
C. 1 2 3 3 1
D. 0 1 2 1 0

Answer: C


4.
#include <stdio.h>
int no1 = 17, no2 = 71;
void swapping(void)
{
	int temp = no2;
	no2 = no1;
	no1 = temp;
}
int main(void)
{
	int no1 = 17, no2 = 71;
	printf("%d %d ", no1 , no2);
	swapping();
	printf("%d %d\n", no1, no2);
	return 0;
}

A. 17 17 17 17
B. 17 71 17 71
C. 71 17 71 17
D. 71 71 71 71

Answer: B

5.
#include <stdio.h>
int n2 = 11, n1 = 12;

int test(int n1, int n2)
{
	int r1, r2, r3;

	r1 = n1 + n2; r3 = n1 - n2; r2 = n1 * n2;

	return r1, r2, r3;
}

int main(void)
{
	int n1 = 11, n2 = 12;

	printf(" %d ",  test(printf("Sunbeam Pune"), printf("Sunbeam Karad")));

	printf("%d %d\n", n1, n2);

	return 0;
}

A. Sunbeam KaradSunbeam Pune  -1 11 12
B. Sunbeam Karad Sunbeam Pune -1 -1 12
C. Sunbeam KaradSunbeam Pune  23 1 12
D. Sunbeam Karad Sunbeam Pune 23 11 12

Answer: A

***********************************************************

1. #include <stdio.h>
int testDemo(int, int);
int main(void)
{
	int you = 64, me = 32;

	int we = testDemo(you, me);
    // we = 64 

	printf("%d %d %d\n", me, you, we);
    //                   32,64,64 
	return 0;
}
int testDemo(int me, int you)
{
    // me = 64  you = 32 
	me = me + you; // 64 + 32 ==> 96
	return me - you; // 96 - 32 ==> 64 
	you = you - me;
	return me + you;
}

***************************************************************************************

2. #include <stdio.h>
int value = 0;
int function(void)
{
	auto int value  = 1;
	printf("%d ", value); // 1 
	{
		int value = 2;
		printf("%d ", value); // 2 
		{
			value += 1;
			printf("%d ", value); // 3 
		}
		printf("%d ", value); // 3 
	}
	printf("%d ", value);// 1 
	return 0;
}
int main(void)
{
    function();
    return 0;
}

******************************************************************************

#include <stdio.h>
int n2 = 11, n1 = 12;

//           12      13
int test(int n1, int n2)
{
    
	
    int r1, r2, r3;

    r1 = n1 + n2; // 12 + 13 --> 25  
    r3 = n1 - n2; // 12 - 13 --> -1  
    r2 = n1 * n2; // 12 * 13 --> 156 

    

	return r1, r2, r3; // return 25,156,-1 ==> -1 will be returned 
}

int main(void)
{
	int n1 = 11, n2 = 12;

	printf(" %d ",  test(printf("Sunbeam Pune"),printf("Sunbeam Karad")));
    // -1 will be printed 

	printf("%d %d\n", n1, n2);

	return 0;
}

