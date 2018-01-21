#include<stdio.h>
int main()
{
int a,i,b,j,c=0;
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  for(j=1;j<=100;j++)
  {
    if(a%j==0) 
    c++;
  }
  if(c==2)
  { 
  printf("a");
  }
    else
    { 
    }
}}
