#include<stdio.h>
int main()
{

  int v1 =16,v2,v3,ans;
  v2= ~~v1;
  v3 = ~v2 ,v2+1;
  ans = v1+v2+v3;
  printf("%d",ans);



}