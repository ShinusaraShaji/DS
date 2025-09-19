#include<stdio.h>
#include<conio.h>
void main()
{
int arr[50],arr2[50],merge[100],size1,size2,i,k;
clrscr();
printf("Enter the size of first array:\n");
for(i=0;i<size1;i++)
{
scanf("%d",&arr[i];
merge[i]=arr[i];
}
k=i;
printf("Enter the size of second array:\n");
scanf(%d",&size2);
printf("Enter the elements:\n");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("The merged array:\n");
for(i=o;i<k;i++)
{
printf("%d\n",merge[i]);
}
getch();
return 0;