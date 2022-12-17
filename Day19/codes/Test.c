#include<stdlib.h>
#define MERGE(x,y) x < y ? x##y(0) : y ;
int main()
{
int ex=2,it=3,a;
MERGE(ex,it) 
//   2 < 3 ? ex##it(0) : it ;
//   2 < 3 ? exit(0) : it ;
printf("%d\n",a);
return 0;
}