#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void initialize();
void Iqinsert();
void Iqinsert();
void Iqdelete();
int queue[MAXSIZE];
int front,rear;
void main()
{
clrscr();
initialize();
int choice;
while(10
{
clrscr();
printf("\n STATIC IMPLEMENTATION OF LINEAR QUEUE");
printf("\n....");
printf("\n 1.Insert");
printf("\n 2.Delete");
printf("\n 3.Traverse");
printf("\n 4.Exit");
printf("\n___");
printf("\n \n Enter your choice[1/2/3/4]:");
scanf("%d",&choice);
switch(choice)
{
case 1:	Iqinsert();
break;
case 2: Iqdelete();
break;
case 3:Iqtraverse();
break;
case 4:exit(0);
default:printf("\n Invalid choice");
}
getch();
}
}
void initialize()
{
front=rear=-1;
}
void Iqinsert()
{
int num;
if(rear==MAXSIZE-1)
{
printf("\n Oueue is full(queue overflow)");return;}