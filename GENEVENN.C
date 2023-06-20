#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
printf("\nEnter the value for n: ");
scanf("%d",&n);
printf("\nEven numbers from 1 to %d: ",n);
for(i=1;i<=n;i++)
{
if(i%2==0)
printf("%d ",i);
}
getch();
return 0;
}
