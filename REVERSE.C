#include<stdio.h>
void main()
{
int n,rev=0,r;
clrscr();
printf("enter a number:");
scanf("%d",&n);
while (n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("reversed number =%d",rev);
getch();
}