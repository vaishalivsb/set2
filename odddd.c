#include<stdio.h>
int main()
{
int a,i,b;
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
    if(i%2!=0)
      printf("odd %d",i);
}
