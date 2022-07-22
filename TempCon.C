#include<stdio.h>
#include<conio.h>
void main()
{
float C,F;
clrscr();
printf("Enter temperature in centigrade = ");
scanf("%f",&C);
F=(9*C)/5+32;
printf("\nTemperature in fahrenheit = %f",F);
getch();
}