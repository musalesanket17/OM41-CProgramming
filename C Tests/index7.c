
1. What will be the o/p of following code
#include <stdio.h>
int main(void)
{
	int arr[3][2]={{1,2},{1},{5}};
	int i,j;
	int *ptr=*(arr+2);
	printf("\n %d",*++ptr+1);
}
2. #include<stdio.h>
#define COL 3
#define ROW 3
int main(void)
{
int arr[ROW][] = {{10,20,30},{11,22},{111}},i,j;
for(i=0; i<3; i++)
for(j=0; j<3; j++)
printf("%d",arr[i][j]);
return 0;
}
3. What will be the o/p of the following code
#include <stdio.h>
int main(void)
{
	int arr[2][2]={1,2,3,4};
	int i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d %d ",*(*(arr+i)+j),*(*(arr+j)+i));
		}
	}

}
4. #include <stdio.h>
int main(void)
{
	char arr[4][8]={"DAC","DMC","DESD","DBDA"};
	char *ptr = (char *)arr+1;
	printf("%s %c ",ptr,*(ptr+1));
}
5. What if 2D array is declared as 
int arr[2][2] 
and if we want to print the address of 
arr[0][0]  and  arr[0][1] 
i.e first row which of the following notation will be useful__
6. #include<stdio.h>
int main( void )
{
int arr[2][3] = {10,20,30,40};
int *ptr[] = {(int *)arr+2, (int *)arr+1};
int **p=ptr;
printf("%d %d", p[0][1], *(*(p + 1) + 0));
return 0;
}
7. What will be the o/p of the following program
#include<stdio.h>
int main( void )
{
	int arr[5]={10,1,2,3,4};
	int *p[]={arr,arr+1,arr+2};
	printf("%d\n",*p[0]);
	printf("%d\n",*(p+1)[0]);
	printf("%d\n",*(p+2)[0]);	
	return 0;
}
8. What will be the o/p of the following code
#include<stdio.h>
int main( void )
{
	int arr[5]={10,1,2,3,4};
	int *p[]={arr,arr+1,arr+2};
	int **pptr = &p;
	pptr++;
	printf("%d %d",pptr-p,**pptr);
	return 0;
}
9. if i/p is given as 
<programname> monday tuesday wednesday
what will be the o/p 
#include<stdio.h>
int main( int argc,char* argv[])
{
	int i=1;
	printf("%c",++*argv[i]);
	return 0;
}
10. What Will be the Output?
#include<stdio.h>   
int main(void) {
	int index = 0;
	char array[4][8] = { "Java", "Angular", "Python", "BigData"};
	char *str = NULL;
	str = "%-15s";
	for (index = 1; index < 3; index)
		printf(str, array[++index]);
	return 0;
}