#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[5],choice=0,n,top=-1,x,i;
void push(int value);
void pop(void);
void peek(void);
int main()
{
  printf("stack operations using array: ");
  while(choice!=4)
  {
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Peek");
    printf("\n4.Exit");
    printf("\nEnter the choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      {
	push();
	break;
      }
      case 2:
      {
	pop();
	break;
      }
      case 3:
      {
	peek();
	break;
      }
      case 4:
      {
	printf("\nExit");
	break;
      }
      default:
      {
	printf("\nEnter a valid choice: ");
      }
    }
  }
}
void push(int value)
{
  if(top==size-1)
  {
    printf("\nStack is full");
  }
  else
  {
    printf("\nEnter the value: ");
    scanf("%d",&value);
    top++;
    stack[top]=value;
    printf("\nValue inserted");
  }
}
void pop()
{
  if(top==-1)
  {
    printf("\nStack is empty");
  }
  else
  {
    printf("%d",stack[top]);
    top--;
  }
}
void peek()
{
  if(top==-1)
  {
    printf("\nStack is empty");
  }
  else
  {
    printf("\nThe elements in the stack are: ");
    for(i=top;i>=0;i--)
    {
      printf("%d",stack[i]);
    }
  }
}

































