#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50],arr2[50],size1,size2,i,k,merge[100];
clrscr();
printf("Enter the array1 size:");
scanf("%d",&size1);
printf("Enter array1 elements:");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
k=i;
printf("\nEnter the array2 size:");
scanf("%d",&size2);
printf("\nEnter array2 elements:");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("\nenter the array after merging:");
for(i=0;i<k;i++)
printf("%d",merge[i]);
getch();
return 0;
}
