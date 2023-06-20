#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void bubblesort(int a[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
swap(&a[j],&a[j+1]);
}
}
}
void printarray(int a[],int s)
{
int i;
for(i=0;i<s;i++)
printf("%d ",a[i]);
printf("\n");
}
main()
{
int a[]={7,2,3,4,5};
int s=5;
bubblesort(a,s);
printf("sorted array element\n");
printarray(a,s);
getch();
return 0;
}
