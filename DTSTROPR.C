#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int set1[30],set2[30],s1,s2,uni[30],inter[30],diff[30],i,ch;
clrscr();
printf("Enter no of elements in 1st set:");
scanf("%d",&s1);
printf("Enter elements in 1st Set (only 0s &1s):");
for(i=0;i<s1;i++)
{
scanf("%d",&set1[i]);
}
printf("\n Enter number of elements in 2nd set:");
scanf("%d",&s2);
printf("Enter elements in 2nd Set(only 0s &1s):");
for(i=0;i<s2;i++)
{
scanf("%d",&set2[i]);
}
printf("\n1.UNION");
printf("\n2.INTERSECTION");
printf("\n3.DIFFERENCE");
printf("\n4.EXIT");
while(1)
{
printf("\nEnter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1://UNION
if(s1==s2)
{
printf("\nElements after Union operation:");
for(i=0;i<s1;i++)
{
uni[i]=set1[i]|set2[i];
printf("%d",uni[i]);
}
}
else{
printf("Set union not possible as sets are of different size\n");
}
break;
case 2://INTERSECTION
if(s1==s2)
{
printf("\nElements after intersection operation:");
for(i=0;i<s1;i++)
{
inter[i]=set1[i]&set2[i];
printf("%d",inter[i]);
}
}
else
{
printf("Set intersection not possible as sets are of different size \n");
}
break;
case 3://DIFFERENCE
if(s1==s2)
{
printf("\nElements after Difference operation:");
for(i=0;i<s1;i++)
{
diff[i]=set1[i]&~set2[i];
printf("%d",diff[i]);
}
}
else
{
printf("Set difference not possible as sets are of different size\n");
}
break;
case 4: exit(0);
break;
default:printf("\n Wrong choice,please select a valid choice");
break;
}
}
}

