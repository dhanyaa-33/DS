#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int q[10],front=0,rear=-1;
int main()
{
int ch;
void insert();
void delet();
void display();
printf("\ncircular queue operation\n");
printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
while(1)
{
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delet();
break;
case 3:
display();
break;
case 4:
exit(0);
deafult:
printf("Invalid choice");
}
}
}
void insert()
{
int x;
if((front==0 && rear==MAX-1) || (front>0 && rear==front-1))
printf("Queue is overflow\n");
else
{
printf("Insert element: ");
scanf("%d",&x);
if(rear==MAX-1 && front>0)
{
rear=0;
q[rear]=x;
}
else
{
if((front==0) && (rear==-1) || (rear!=front-1))
q[++rear]=x;
}
}
}
void delet()
{
int a;
if((front==0) && (rear==-1))
{
printf("Queue is undeflow\n");
exit(0);
}
if(front==rear)
{
a=q[front];
rear=-1;
front=0;
}
else
if(front==MAX-1)
{
a=q[front];
front=0;
}
else a=q[front++];
printf("Deleted element is: %d\n",a);
}
void display()
{
int i,j;
if(front==0 && rear==-1)
{
printf("Queue is underflow\n");
exit(0);
}
if(front>rear)
{
for(i=0;i<=rear;i++)
printf("\t%d",&q[i]);
for(j=front;j<=MAX-1;j++)
printf("\n \t%d",q[i]);
printf("\nRear is at %d\n",q[rear]);
printf("\nFront is at %d\n",q[front]);
}
else
{
for(i=front;i<=rear;i++)
{
printf("\t%d",q[i]);
}
printf("\nRear is at %d\n",q[rear]);
printf("\nFront is at %d\n",q[front]);
}
printf("\n");
}
