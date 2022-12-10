
1. What is the operator used to make 1's One's compliment.?
2. What will be the output of the following program ?  

------------t1.txt--------------------
ABCDEFGHIJKLMNOP
-----------------------------------------

#include <stdio.h>
int main( void )
{
	int i,start,end;
	FILE *fp=NULL;
	char buf;

	fp = fopen("t1.txt", "r");
	fseek(fp, 0, SEEK_SET);
	start=ftell(fp);
	fseek(fp, 0, SEEK_END);
	end=ftell(fp);
	printf("\n File char count will be = %d\n",end-start);

	return 0;
}
3. What will be output of following code? and text file having following data.
------------test_file--------------------
NULL The origin of C is closely tied to the development of the Unix operating system, 
originally implemented in assembly language on a PDP-7 by Dennis Ritchie and Ken Thompson, 
incorporating several ideas from colleagues. Eventually, 
they decided to port the operating system to a PDP-11. 
-----------------------------------------

#include <stdio.h>
int main()
{
    char buf[10];
    FILE *fp;
    fp=fopen("test_file.txt","r");
    while((fgets(buf, 5, fp))!= NULL)
         printf("%s",buf);
    fclose(fp);
    return 0;
}
4. what will the output of following program ?  
------------t1.txt--------------------
ABCDEFGHIJKLMNOP
-----------------------------------------
#include <stdio.h>
int main( void )
{
	int i,start,end;
	FILE *fp=NULL;
	char buf;
	fp = fopen("t1.txt", "r");
	fseek(fp, 0, SEEK_SET);
	start=ftell(fp);
	fseek(fp, -1L, SEEK_END);
	end=ftell(fp);
	start -=2;

	while(end != start)
	{
		buf=fgetc(fp);
		printf("%c\t",buf);
		fseek(fp, end, SEEK_SET);
		end--;
	}
	fclose(fp);
	return 0;
}
5. Select a function which is used to write a string to a file…
6. what will be the output of this code? 
and will be entered for scanf statement will be 
//sunbeamdac                                       
//sunbeamdmc
#include<stdio.h> 
int main() 
{ 
    int i, n=2; 
    char str[50];  
    FILE *fptr = fopen("t3.txt", "w"); 
    
    for (i=0; i<n; i++) 
    { 
        puts("Enter a name"); 
        scanf("%*c%s",str); 
       fprintf(fptr,"%d].%s\n", i, str+2); 
    } 
    fclose(fptr);   
    return 0; 
}
7. What is output of following Code?int main(){

int a,b,c;
a=4;
b=2;
c=a<<b && a>>b;
printf("%d",c);
}
8. what will be output of following code?
#include <stdio.h>
int main () 
{
   FILE *fp;
   int c;
  
   fp = fopen("file.txt","r");
   
   while(1) 
   {
      c = fgetc(fp);
      
      if( feof(fp) ) 
      { 
         break ;
      }

      printf("%c", c);
   }
   fclose(fp);
   
   return(0);
}
9. What is output of following programme?int main()
{
    char c;
    FILE *fp;
    fp=fopen("sunbeam.txt","r");
    while((c=fgetc(fp))!=EOF)
         printf("%c",c);
    fclose(fp);
    return 0;
}
10. What is output of following Code?int main()
{
int a,b,c;
a=4;
b=2;
c=~(a^b / a<<b);
 printf("%d",c);
}