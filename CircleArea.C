#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
float radius,area,cir;
clrscr();
printf("Enter radius of circle = ");
scanf("%f",&radius);
area=PI*radius*radius;
cir=2*PI*radius;
printf("Area of circle = %f",area);
printf("\nCircumference of circle = %f",cir);
getch();
}