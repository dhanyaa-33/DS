#include<stdio.h>
#include<conio.h>
int q[10],top=-1,rear=-1,front=-1,a[20][20],vis[10],stk[10];
int delete();
void add(int value);
void bfs(int s,int n);
void dfs(int s,int n);
void push(int value);
int pop();
void main()
{
int n,i,s,ch,j;
char c,d;
clrscr();
printf("\nEnter the number of vertices: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("\nEnter 1 if %d has a node with %d or else 0",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\nThe adjacency matrix is: ");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
do
{

for(i=1;i<=n;i++)
vis[i]=0;
printf("\nBFS and DFS operations:");
printf("\n1.BFS");
printf("\n2.DFS");
printf("\nEnter your choice: ");
scanf("%d",&ch);
printf("\nEnter the source vertex: ");
scanf("%d",&s);
switch(ch)
{
case 1:
bfs(s,n);
break;
case 2:
dfs(s,n);
break;
}
printf("\nDo you want to continue: ");
scanf("%c",&d);
scanf("%c",&c);
}
while((c=='y') || (c=='Y'));
getch();
}
void bfs(int s,int n)
{
int p,i;
add(s);
vis[s]=1;
p=delete();
if(p!=0)
printf(" %d",p);
while(p!=0)
{
for(i=1;i<=n;i++)
if((a[p][i]!=0) && (vis[i]==0))
{
add(i);
vis[i]=1;
}
p=delete();
if(p!=0)
printf("%d",p);
}
for(i=1;i<=n;i++)
if(vis[i]==0)
bfs(i,n);
}
void add(int value)
{
if(rear==19)
printf("\nQueue is full");
else
{
if(rear==-1)
{
q[++rear]=value;
front++;
}
else
q[++rear]=value;
}
}
int delete()
{
int k;
if((front>rear)||(front==-1))
return 0;
else
{
k=q[front++];
return k;
}
}
void dfs(int s,int n)
{
int i,k;
push(s);
vis[s]=1;
k=pop();
if(k!=0)
printf("%d ",k);
while(k!=0)
{
for(i=1;i<=n;i++)
if((a[k][i]!=0)&&(vis[i]==0))
{
push(i);
vis[i]=1;
}
k=pop();
if(k!=0);
printf(" %d",k);
}
for(i=1;i<=n;i++)
if(vis[i]==0)
dfs(i,n);
}
void push(int value)
{
if(top==19)
printf("\nStack overflow");
else
stk[++top]=value;
}
int pop()
{
int k;
if(top==-1)
return 0;
else
{
k=stk[top-1];
return k;
}
}
