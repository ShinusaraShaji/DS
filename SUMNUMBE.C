#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a,b,sum;
clrscr();
printf("Enter the two numbers:\n");
scanf("%d%d",&a,&b);
sum=add(a,b);
printf("The sum is :%d",sum);
getch();
}
int add(int x,inty)
{
return(x+y);
}