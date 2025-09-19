#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void push();
void pop();
void display();
int stack[MAXSIZE];
int top=-1;
void main()
{
int choice;
clrscr();
while(1)
{
clrscr();
printf("STATIC IMPLEMENTATION OF STACK");
printf("\n-------------------------");
printf("\n1.PUSH");
printf("\n2.POP");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\n--------------------------");
printf("\n\nEnter your choice[1/2/3/4]:");
scanf("%d",&choice);
switch(choice)
{
case1:push();
break;
case2:pop();
break;
case3:display();
break;
case4:exit(0);
default:printf("\n\nInvalid choice");
}
getch();
}
}
void push()
{
int num;
if(top==MAXSIZE-1)
{
printf("\n\nStack is full(Stack overflow)");
return;
}
printf("\n\nEnter the element to be pushed in stack:");
scanf("%d",&num);
top++;
stack[top]=num;
}
void pop()
{
int num;
if(top==-1)
{
printf("\n\nStack is empty(Stack underflow)");
return;
}
num=stack[top];
printf("\n\nElement popped from stack:%d",num);
top--;
}
void display()
{
int i;
if(top==-1)
{
printf("\n\nStack is empty(Stack underflow)");
return;
}
printf("\n\nStack elements are :\n");
for(i=top;i>=0;i--)
printf("Stack[%d]:%d\n",i,stack[i]);
}