#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3,s4,s5,total;
float per;
clrscr();
printf("Enter marks of five subjects = ");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
per=(float)total/5;
printf("Percentage = %f",per);
getch();
}