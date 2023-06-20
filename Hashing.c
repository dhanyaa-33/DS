#include<stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
int h[TABLE_SIZE]={NULL};
void insert()
{
int key,index,i,hkey;
printf("\nEnter a value to insert:");
scanf("%d",&key);
hkey=key%TABLE_SIZE;
for(i=0;i<TABLE_SIZE;i++)
{
index=(hkey+i)%TABLE_SIZE;
if(h[index]==NULL)
{
h[index]=key;
break;
}
}
if(i==TABLE_SIZE)
printf("\nCannot be inserted");
}
void search()
{
int key,index,i,hkey;
printf("\nEnter the element to search: ");
scanf("5d",&key);
hkey=key%TABLE_SIZE;
for(i=0;i<TABLE_SIZE;i++)
{
index=(hkey+i)%TABLE_SIZE;
if(h[index]==key)
{
printf("Value found at %d",index);
break;
}
}
if(i==TABLE_SIZE)
printf("Value not founf");
}
void display()
{
int i;
printf("\nEnter in the table are: ");
for(i=0;i<TABLE_SIZE;i++)
printf("\nAt index %d value  is %d",i,h[i]);
}
main()
{
int ch,i;
while(1)
{
printf("\nHashing operatons are:\n1.insert\n2.search\n3.display\n4.exit");
printf("\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
display();
break;
case 3:
search();
break;
case 4:
exit(0);
}
}
}
