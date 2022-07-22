#include<stdio.h>
#include<conio.h>
void main()
{
char left,right,nearmid,middle,first,flower;
clrscr();
start:
printf("\nThink of any color from VIBGYOR.\n\n\n");
printf("\nIs it left to middle or middle. \nanswer in Y or N\n");
scanf("%s",&left);
if(left == 'Y')
{
 printf("\nIs it near to middle or middle. \nanswer in Y or N\n");
 scanf("%s",&nearmid);
 if(nearmid == 'Y')
 {
  printf("\nIs it middle. \nanswer in Y or N\n");
  scanf("%s",&middle);
  switch(middle)
  {
   case 'Y':
    printf("\nYou are thinking G Green\n");
    break;
   case 'N':
    printf("\nYou are thinking B Blue\n");
    break;
   default:
    printf("\nWrong Statement\n");
    break;
  }
 }
 else if(nearmid == 'N')
 {
  printf("\nIs it first. \nanswer in Y or N\n");
  scanf("%s",&first);
  switch(first)
  {
   case 'Y':
    printf("\nYou are thinking V Violet\n");
    break;
   case 'N':
    printf("\nYou are thinking I Indigo\n");
    break;
   default:
    printf("\nWrong Statement\n");
    break;
  }
 }
 else
 {
  printf("\nWrong Statement\n");
  goto start;
 }
}
else if(left == 'N')
{
 printf("\nIs it same as the color of sun. \nanswer in Y or N\n");
 scanf("%s",&right);
 if(right == 'Y')
 {
  printf("\nIs it same as the color of sunflower. \nanswer in Y or N\n");
  scanf("%s",&flower);
  switch(flower)
  {
   case 'Y':
    printf("\nYou are thinking Y Yellow\n");
    break;
   case 'N':
    printf("\nYou are thinking O Orange\n");
    break;
   default:
    printf("\nWrong Statement\n");
    break;
  }
 }
 else if(right == 'N')
 {
  printf("\nYou are thinking R Red\n");
 }
 else
 {
  printf("\nWrong Statement\n");
  goto start;
 }
}
else
{
 printf("\nWrong Statement\n");
 goto start;
}
getch();
}

