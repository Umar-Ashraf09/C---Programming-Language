#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter two numbers to be checked = ");
scanf("%d%d",&a,&b);
if(a==b)
{
printf("Numbers are equal");
}
else
{
printf("Numbers are unequal");
}
getch();
}