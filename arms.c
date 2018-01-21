#include<stdio.h>
int main()
{
int a,b,c=0,d;
  scanf("%d",&a);
  while(a>0)
  {
    b=a%10;
  d=a/10;
  a=d;
 c=c+(b*b*b);
}
  if(c==a)
    printf("armstrong");
  else
    printf("not a armstrong");
return 0;
}
