#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float p,r,t,SI,CI,amount;
clrscr();
printf("Enter principle,rate of interest and time = \n");
scanf("%f%f%f",&p,&r,&t);
SI=(p*r*t)/100;
amount=p+pow(1+r/100,t);
CI=amount-p;
printf("Simple Interest = %f",SI);
printf("\nCompund Interest = %f",CI);
getch();
}