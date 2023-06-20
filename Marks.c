#include<stdio.h>
#include<conio.h>
int main()
{
int m1,m2,m3,m4,m5;
int sum,per=0;
printf("\nEnter the marks[m1,m2,m3,m4,m5): ");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
printf("\nThe total marks is %d",sum);
per=sum*0.2;
printf("\nThe percentage of the marks is %d",per);
if(per>=80)
printf("\nPassed with distinction");
if(per<79 && per>60)
printf("\nPassed with first class");
if(per<50 && per>45)
printf("\nPassed with second class");
if(per<44 && per>32)
printf("\nPassed with third class");
if(per<=32)
printf("\nFailed");
getch();
return 0;
}
