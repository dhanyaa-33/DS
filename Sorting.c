#include<stdio.h>
#include<conio.h>
void insert(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp=a[i];
j=j-1;
while(j>=0 && temp<=a[j])
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
}
void printarray(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
int main()
{
int a[]={12,31,25,8,32,17};
int n = sizeof(a)/sizeof(a[0]);
printf("\nBefore sorting array: " );
printarray(a,n);
insert(a,n);
printf("\nAfter sorting array: ");
printarray(a,n);

getch();
return 0;
}

