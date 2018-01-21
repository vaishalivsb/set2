#include<stdio.h>
int main()
{
int a,r=0,b,n;
while(n>0)
{
a=n;
b=n%10;
r=r*10+b;
n=n/10;
}
printf("%d",r);
if(n==r)
printf("palindrome");
else
printf("not a palindrome");
}
