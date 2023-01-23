#include<stdlib.h>
static int count=1;
int i=1;
void test(int num);
int main(void)
{
	int num=1;
	test(num);
	return 0;
}
void test(int num)
{
	if(num<=2)
	{
		int i=1;
		printf(" %d ",i++);
		printf(" %d ",count++);
		i++;
		test(num+1);
	}
	else
		return;
}

