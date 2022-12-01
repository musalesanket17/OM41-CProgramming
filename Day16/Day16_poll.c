1.
#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[]="54321\0";	int i=strlen(a);
	
	printf("here in 3 %d\n",++i);
	return 0;
}

A. here in 3 5
B. here in 3 6
C. here in 
D. None of the above

Answer: B





2.
//Consider 64 bit Compiler
#include<stdio.h>
#define so(s) sizeof(s)
int main(void)
{
    char *s1="ditiss",s2[]="DITISS";

    printf("%d %d %d",sizeof(s1),sizeof(s2),so("DITISS"));
    return 0;
} 

A. 2 7 7 
B. 8 8 8
C. 1 7 7
D. 8 7 7 

Answer: D




3.
#include <stdio.h>
int main(void)
{
	char str[]="SunBeam IT Park";

	printf("%s\t%s\t%s",&str[8],&8[str],str+8);

	return 0;
}

A. IT Park	IT Park	IT Park
B. Compile time error
C. 32 32 IT Park
D. IT Park	IT Park  SunBeam IT Park

Answer: A






4.
The correct statement to copy string literal constant “PG-DITISS” to string str is
A. str=”PG-DITISS”
B. strcpy(“PG-DITISS”,str);
C. strcpy(str,”PG-DITISS”)
D. strcpy(str,’PG-DITISS’)

Answer: C





5.

#include <stdio.h>
int main(void)
{
	char dest[] = "Visual basic",src[] = "C++";
	puts(strcpy(&dest[7],src)-7);
	return 0;
}
/*
A. Visual C++
B. c++
C. basic
C. Visual

Answer: A
