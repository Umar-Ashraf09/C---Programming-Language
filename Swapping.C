#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
clrscr();
printf("Enter two numbers for swapping = ");
scanf("%d%d",&a,&b);
printf("Values before swapping are: a=%d\tb=%d",a,b);
t=a;
a=b;
b=t;
printf("\nValues after swapping: a=%d\tb=%d",a,b);
getch();
}