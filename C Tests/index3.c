1. Find the output of the following code:
int main()
{
    int n=1; 
    for(printf("Step 1 \t");printf("Step 2\t"),n--;printf("Step 4\t"))
    {
        printf("Step 3\t");
    }
}
2. What will be the output of the following code? 
#include<stdio.h>
int main() {
	int  i = -3, j = 0;
	while (i <= 3, j < 10) {
		if (i >= 0)
			break;
		else {
			i++;
			j++;
		}
		printf("%d, %d\n", i, j);
		continue;
	}
	printf("\nSunbeam");
	return 0;
}
3. what will be the output of following code?  
#include <stdio.h>
int main(void) {
	int a = 2;
	do {
		switch (a, a + 1) {
		case 2:
			printf("\nYou are in b ");
			break;
		case 3:
			printf("\nYou are in c ");
			break;
		default:
			printf("\nYou are in default");
		}
	} while (a--);
	return 0;
}
4. #include <stdio.h>
void main()
{
    int i=1;
    while (i<=5)
    {
       printf("%d",i);
       if (i==5)
              goto print;
       i++;
    }
}
5. Find the output of the following code:
int main()
{
    int n=5;
    while(n--)
    {
        if(!n)
            continue;
    }
    printf("%d",n);
}
6. what will be the output of following code?
int main() {
	int x;
	for (x = 1; x <= 5; x++) {
		switch (x) {
		case 1:
			printf("Sunbeam");
			continue;
		case 2:
		case 3:
		case 4:
			break;
		case 5:
			printf("Info");
		}
		printf(".com");
	}
}
7. void main()
{
while(1){
if(printf("%d",printf("%d")))
break;
else
continue;
}
}
8. What is the output of the following code? 
#include<stdio.h>
void main()
{
	int s=0;	
	while(s++<10)
	{
		if(s<4 && s<9)
			continue;
		printf(“\n%d\t”,s);
	}
}
9. #include <stdio.h> 
int main() 
{ 
    int i = 0, j = 0; 
    while (i<5,j<10) 
    { 
        i++; 
        j++; 
    } 
    printf("%d %d", i, j); 
}
10. 10. What will be the output?
#include<stdio.h>                                           
int main()
{
int x=5;
switch(	x*2,5)
{
   case 15:
      printf("One");
      break;
   case 10:
      printf("Two");
	       break;
   default:
      printf("Three");
}
return 0;
}