#include<stdio.h>
#include<conio.h>
void main()
{
char a,b,c,d,e,p,q,r,s,sum;
clrscr();
Here:
printf("\n\n\t**//**<<<<<<<<<<<<<<<<<<<<<<<<<<<0>>>>>>>>>>>>>>>>>>>>>>>>>>>**//**\n\n");
printf("\n\t\tBased on 16 Personality Type by Myers-Briggs\n");
printf("\n\t\tThis is a Personality Test\n");
printf("\n\t\tYou have to answer 4 questions with options choose one from it\n");
printf("\n\t\tTo give this test answer 'Y'\n\n\n\t\t");
scanf("%s",&a);
if(a == 'Y')
{
  printf("\n\n\t**//******************************************************//**\n\n");
  printf("\nQ-1: \tYou are totally exhausted because your week was endless and\t \n\tless than great.\t \n\tHow are you going to spend your weekend?\n");
  printf("\n(A): \tI'll call my friends to ask about their plans.\t \n\tI heard that a new restaurant opened/a nice comedy is playing in cinemas\t/there are big discounts at paintball club.\t \n\tWe should all go out together.\n");
  printf("\n(B): \tI'll switch on the Don't disturb mode on my phone and stay at home.\t \tI'll watch a new episode of my favorite TV show,do a puzzle, and take a \tlong bath with a book.\n\n\n\t");
  scanf("%s",&b);
  switch(b)
   {
    case 'A':
      p = 'E';
      break;
    case 'B':
      p = 'I';
      break;
    default:
      printf("\nWrong Input\n");
      goto Here;
      break;
   }
  printf("\n\n\t**//******************************************************//**\n\n");
  printf("\nQ-2: \tWhich of these 2 descriptions suits you more?\n");
  printf("\n(A): \tThe most important thing for me is what's happening here and now.\t \tI assess real situations and pay attention to details.\n");
  printf("\n(B): \tFacts are boring.I love to dream and play over upcoming events in my\t \tmind.I rely more on intuition than information.\n\n\n\t");
  scanf("%s",&c);
  switch(c)
   {
    case 'A':
      q = 'S';
      break;
    case 'B':
      q = 'N';
      break;
    default:
      printf("\nWrong Input\n");
      goto Here;
      break;
   }
  printf("\n\n\t**//******************************************************//**\n\n");
  printf("\nQ-3: \tA competitor of your current employer is trying to entice you.\t \n\tYou have doubts because the salary is much higher there, but the staff\t \there is great.Moreover, the head of your department hinted that he will \trecommend you to the bosses when he retires.How are you going to\t \tmake decision?\n");
  printf("\n(A): \tI'll learn all the available information about the competitor, ask my HR \tmanager for advice, and draw a chart with all the pros and cons.In such \tcases, it's important to weigh up all the arguments and assess the\t \tsituation with a cold mind.\n");
  printf("\n(B): \tI'll listen to my feelings.I always try to follow my heart.\n\n\n\t");
  scanf("%s",&d);
  switch(d)
   {
    case 'A':
      r = 'T';
      break;
    case 'B':
      r = 'F';
      break;
    default:
      printf("\nWrong Input\n");
      goto Here;
      break;
   }
  printf("\n\n\t**//******************************************************//**\n\n");
  printf("\nQ-4: \tOnly 2 weeks are left before your close friends' wedding.How are the\t \tpreparations going?\n");
  printf("\n(A): \tOne month ago, I chose the saxophonist who will play a medley of our\t \tschool songs/collected the couple's photo love story/composed a poem/\t \tpressed my suit/made appointments with the stylist and makeup master.\t \tI prefer to be fully armed.\n");
  printf("\n(B): \tWhy prepare? I'll be having fun and enjoying myself at the party.I'll\t \timprovise my wedding speech.The best things happen spontaneously.\n\n\n\t");
  scanf("%s",&e);
  switch(e)
   {
    case 'A':
      s = 'J';
      break;
    case 'B':
      s = 'P';
      break;
    default:
      printf("\nWrong Input\n");
      goto Here;
      break;
   }
printf("\n\n\n\t>>>>>>>>>>>>>>>>>>>>###_^_^_^_^_**0**_^_^_^_^_###<<<<<<<<<<<<<<<<<<<<\n");
printf("\n\n\tAfter calculating answer you gave based on that this is you personality \ttype\n");
printf("\n\t\t\t\t\t%c  %c  %c  %c\n\n",p,q,r,s);
printf("\t\tE = Extraversion \t\t\tT = Thinking \n\t\tI = Introversion \t\t\tF = Feeling \n\t\tS = Sensing \t\t\t\tJ = Judging \n\t\tN = Intuition \t\t\t\tP = Perceiving");

 if((p=='E' && q=='S') && (r=='T' && s=='J'))
 {
  printf("\n\n\tKnown as: 'The Supervisor', is a rule-abiding, methodical, hardworing \t\ttraditionalist, dedicated to getting the job done. \n\n\tCharacteristics: \n\t\tLogical \n\t\tSystematic \n\t\tOrganized \n\t\tConscientious\n\n");
 }
 else if((p=='E' && q=='S') && (r=='T' && s=='P'))
 {
  printf("\n\n\tKnown as: 'The Dynamo', is thrill-seeking, with an engergetic talent for \tputting out fires. \n\n\tCharacteristics: \n\t\tActivity-Oriented \n\t\tVersatile \n\t\tPragmatic \n\t\tOutgoing\n\n");
 }
 else if((p=='E' && q=='S') && (r=='F' && s=='J'))
 {
  printf("\n\n\tKnown as: 'The Provider', is a helper, sensitive to the needs of others \tand intensely dedicated to their reponsibilities. \n\n\tCharacteristics: \n\t\tThorough \n\t\tResponsible \n\t\tDetailed \n\t\tTraditional\n\n");
 }
 else if((p=='E' && q=='S') && (r=='F' && s=='P'))
 {
  printf("\n\n\tKnown as: 'The Performer', is a charming, fun-loving entertainer who \t\tloves spontaneity and attention. \n\n\tCharacteristics: \n\t\tEnthusiastic \n\t\tFriendly \n\t\tCooperative \n\t\tTolerant\n\n");
 }
 else if((p=='E' && q=='N') && (r=='T' && s=='J'))
 {
  printf("\n\n\tKnown as: 'The Commander', is the strategic leader with a vision, quick \tto see new solutions and organize change. \n\n\tCharacteristics: \n\t\tLogical \n\t\tStrategic \n\t\tFair \n\t\tStraightforward\n\n");
 }
 else if((p=='E' && q=='N') && (r=='T' && s=='P'))
 {
  printf("\n\n\tKnown as: 'The Visionary', is a true innovator, and is inspired by \t\tcomplex, challenging problems. They are continually searching for new \t\tways to solve them. \n\n\tCharacteristics: \n\t\tEnterprising \n\t\tOutspoken \n\t\tChallenging \n\t\tResourceful\n\n");
 }
 else if((p=='E' && q=='N') && (r=='F' && s=='J'))
 {
  printf("\n\n\tKnown as: 'The Teacher', is often an organizer and catalyst for human \t\tgrowth, due to profound ability to persuade others and see their \t\tpotential. \n\n\tCharacteristics: \n\t\tLoyal \n\t\tVerbal \n\t\tEnergetic \n\t\tCongenial\n\n");
 }
 else if((p=='E' && q=='N') && (r=='F' && s=='P'))
 {
  printf("\n\n\tKnown as: 'The Champion', is an energetic, warm, and passionate creator \tcentered on developing new ideas. \n\n\tCharacteristics: \n\t\tCreative \n\t\tVersatile \n\t\tPerceptive \n\t\tImaginative\n\n");
 }
 else if((p=='I' && q=='S') && (r=='T' && s=='J'))
 {
  printf("n\n\tKnown as: \n\n\tCharacteristics: \n\t\tFactual \n\t\tPractical \n\t\tOrganized \n\t\tSteadfast\n\n");
 }
 else if((p=='I' && q=='S') && (r=='T' && s=='P'))
 {
  printf("\n\n\tCharacteristics: \n\t\tLogical \n\t\tRealistic \n\t\tAdventurous \n\t\tSelf-Determined\n\n");
 }
 else if((p=='I' && q=='S') && (r=='F' && s=='J'))
 {
  printf("\n\n\tCharacteristics: \n\t\tDetailed \n\t\tTraditional \n\t\tService-Minded \n\t\tDevoted\n\n");
 }
 else if((p=='I' && q=='S') && (r=='F' && s=='P'))
 {
  printf("\n\n\tCharacteristics: \n\t\tCaring \n\t\tAdaptable \n\t\tGentle \n\t\tHarmonious\n\n");
 }
 else if((p=='I' && q=='N') && (r=='T' && s=='J'))
 {
  printf("\n\n\tCharacteristics: \n\t\tIndependent \n\t\tVisionary \n\t\tOriginal \n\t\tGlobal\n\n");
 }
 else if((p=='I' && q=='N') && (r=='T' && s=='P'))
 {
  printf("\n\n\tCharacteristics: \n\t\tIndependent \n\t\tTheoretical \n\t\tAnalytical \n\ttReserved\n\n");
 }
 else if((p=='I' && q=='N') && (r=='F' && s=='J'))
 {
  printf("\n\n\tCharacteristics: \n\t\tCommitted \n\t\tCreative \n\t\tDetermined \n\t\tIdealistic\n\n");
 }
 else if((p=='I' && q=='N') && (r=='F' && s=='P'))
 {
  printf("\n\n\tCharacteristics: \n\t\tCompassionate \n\t\tOriginal \n\t\tCreative \n\t\tEmpathetic\n\n");
 }
 else
 {
  printf("Wrong");
 }
}
else
{
 printf("\nThank You\n");
}
getch();
}