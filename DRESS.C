#include<stdio.h>
#include<conio.h>
void main()
{
int n,s,u,w,y,t,v,x,z;
clrscr();
printf("\n Enter your amount = ");
scanf("%d", &n);
printf("\n Original price = %d",n);
s=n*10/100;
printf("\n 10 percentage GST of original price = %d ",s);
t=n+s;
printf("\n 10 percentage GST added = %d",t);
u=t*5/100;
printf("\n 5 percentage mis. = %d",u);
v=t+u;
printf("\n 5 percentage mis. added = %d",v);
w=v*30/100;
printf("\n 30 percentage profit = %d",w);
x=v+w;
printf("\n 30 percentage profit added.\nThis is DM price = %d",x);
y=x*20/100;
printf("\n 20 percentage for MRP = %d",y);
z=x+y;
printf("\n 20 percentage for MRP added.\n MRP = %d",z);
getch();
}