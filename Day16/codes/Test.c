#include <stdio.h>
#include<string.h> 
int main(void)
{
	char dest[] = "Visual basic",src[] = "C++";
	puts(strcpy(&dest[7],src)- 7 );
	return 0;
}