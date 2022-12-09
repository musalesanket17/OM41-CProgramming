
1. 1.What will be the O/P of the following code?
#include<stdio.h>
int main()
{
	int arr[8] = {1,2,3,4,5,6,7,8};
	printf("%d",(arr+1)[3]);
}
2. An array elements are always stored in _________ memory locations.
3. #include<stdio.h>
int main()
{
	int i;
	int arr[5]={1,2,3,4,5};
	*arr+=*(arr+3)-2[arr];
	for (i = 0; i < 5; ++i)
	{
		printf("\t%d,",arr[i]);
	}
}
4. #include <stdio.h>
int main(void)
{
int arr[] = {11, 22, 12, 42, 58, 67};
int *ptr = (int*)(&arr+1);
ptr--;
printf("\nptr=%u",*ptr+1);
}
5. #include <stdio.h>
int main(void)
{
int arr1[] = {1,2,3,4,5};
int arr2[] = {1,2,3,4,5};
if(arr1==arr2)
	printf("Same");
else
	printf("Not same");
}
6. #include <stdio.h>
int main(void)
{
	int i=0;
	char *name = "Sunbeam";
	name[i]='A';
	printf("%s",name);
}
7. #include <stdio.h>
int main(void)
{
	char name[5];
	int i;
	char j=65;
	for (i = 0; i < 4; ++i)
	{
		name[i]=j;
		j++;
	}
	i=0;
	name[i]='\0';
	printf("%s",name);
}
8. What will be the output of this code?
int main(void)
{
double arr[4]={11.1, 22.2, 33.3, 44.4};
double *p = arr+2;
p -= 1;
*p++ = 30.30;
printf("%.2f %.2f",*p,arr[2]);
return 0;
}
9. what will be the output of this code?
#include<stdio.h>	
int main()
{
	int arr[] = {11, 12, 13, 14, 15};
        printf("%d\t%d\t%d",*(arr+3),++*(arr+3),++3[arr]);
         return 0;	
}
10. int main()
{
    float arr[] = {6.0f,4.0f,2.0f};
    float diff = *arr - *(arr+1);
    float rem = *arr % diff;
}