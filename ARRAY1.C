//Program to find average of n numbers using arrays
#include<stdio.h>
#include<conio.h>
int main()
{
 int marks[10], i, a, sum = 0, average, n;
 clrscr();
 printf("Enter number of elements: ");
 scanf("%d", &n);
 for(i=0; i<n; i++)
 {
  printf("Enter number%d: ", i+1);
  scanf("%d", &marks[a]);
  //adding intergers entered by the user to the sum variable
  sum += marks[a];
 }
 average = sum / n;
 printf("Average = %d", average);





 getch();
}