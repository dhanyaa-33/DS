#include<stdio.h>
#include<conio.h>
int binary(int[],int,int);
main()
{
int a[10],n,k,i,pos;
printf("Enter the element: ");
scanf("%d",&n);
printf("\nEnter the array element: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the search key: ");
scanf("%d",&k);
pos=binary(a,n,k);
if(pos!=-1)
{
printf("Available in lists");
}
else
{
printf("Not available");
}
getch();
return 0;
}
int binary(int a[],int n,int k)
{
int f,l,m;
f=0;l=n-1;
while(l>=f)
{
m=(l+f)/2;
if(k<a[m])
l=m-1;
else if(k>a[m])
l=m+1;
else if(k==a[m])
return (m);
}
return -1;
}
