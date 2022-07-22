#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
char cal,dim,shape,form,thirdshape,tri,sol;
int l,b,B,t,s,h,r,pr,ar,LSA,TSA,SA,CSA,V;
double base, expo;
clrscr();
printf("\nCal. for shapes\n");
printf("\nChoose:\n \n\t'd' for 2D.\t \n\t'D' for 3D shape.\t \n\t'g' for triangle\t\n");
scanf("%s",&dim);
switch(dim)
{
 case 'd':
   printf("\nChoose:\n \n\t'R' for Rectangle.\t \n\t'S' for Square.\t \n\t'C' for Circle.\t \n\t'L' for Parallelogram\t \n\t'H' for Rhombus\t \n\t'T' for Trapezoid\n");
   scanf("%s",&shape);
   switch(shape)
    {
     case 'R':
       printf("\nChoose:\n \n\t'P' for perimeter.\t \n\t'A' for area\n");
       scanf("%s",&form);
       switch(form)
	{
	 case 'P':
	   printf("\nEnter Length\t \tAnd\t \tBreath\n");
	   scanf("%d %d",&l,&b);
	   pr = 2 * (l+b);
	   printf("\nAns = %d\n",pr);
	   break;
	 case 'A':
	   printf("\nEnter Length\t \tAnd\t \tBreath\n");
	   scanf("%d %d",&l,&b);
	   ar = l * b;
	   printf("\nAns = %d\n",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'S':
       printf("\nChoose:\n \n\t'P' for Perimeter.\t \n\t'A' for Area.\n");
       scanf("%s",&form);
       switch(form)
	{
	 case 'P':
	   printf("\nEnter side\n");
	   scanf("%d",&l);
	   pr = 4 * l;
	   printf("\nAns = %d\n",pr);
	   break;
	 case 'A':
	   printf("\nEnter side\n");
	   scanf("%d",&l);
	   ar = l * l;
	   printf("\nAns = %d\n",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'C':
       printf("\nChoose:\n \n\t'P' for Perimeter.\t \n\t'A' for Area.\n");
       scanf("%s",&form);
       switch(form)
	{
	 case 'P':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   pr = 2 * pi * r;
	   printf("\nAns = %d\n",pr);
	   break;
	 case 'A':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   ar = pi * r * r;
	   printf("\nAns = %d\n",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'L':
       printf("\nChoose:\n \n\t'P' for Perimeter.\t \n\t'A' for Area.\n");
       scanf("%s",&form);
       switch(form)
	{
	 case 'P':
	   printf("\nEnter side 1\t \tside 2\n");
	   scanf("%d %d",&l,&b);
	   pr = 2 * (l + b);
	   printf("\nAns = %d",pr);
	   break;
	 case 'A':
	   printf("\nEnter side\t \tAnd\t \tHeight\n");
	   scanf("%d %d",&l,&h);
	   ar = l * h;
	   printf("\nAns = %d",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'H':
       printf("\nChoose:\n \n\t'P' for Perimeter.\t \n\t'A' for Area.\n");
       scanf("%s",&form);
       switch(form)
	{
	 case 'P':
	   printf("\nEnter side\n");
	   scanf("%d",&l);
	   pr = 4 * l;
	   printf("\nAns = %d",pr);
	   break;
	 case 'A':
	   printf("\nEnter side\t \tAnd\t \tHeight\n");
	   scanf("%d %d",&l,&h);
	   ar = l * h;
	   printf("\nAns = %d",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'T':
       printf("\nChoose:\n \n\t'P' for Perimeter.\t \n\t'A' for Area.\n");
       scanf("%s",&form);
       switch(form);
	{
	 case 'P':
	   printf("\nEnter side 1\t \tside 2\t \tside 3\t \tside 4\n");
	   scanf("%d %d %d %d",&l,&b,&B,&t);
	   pr = l + b + B + t;
	   printf("\nAns = %d",pr);
	   break;
	 case 'A':
	   printf("\nEnter side 1 \tside 2\t \tHeight\n");
	   scanf("%d %d",&l,&b,&h);
	   ar = ((l + b) / 2) * h;
	   printf("\nAns = %d",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
/*     default:
       printf("\nWrong Statement\n");
       break; */
    }
   break;
 case 'g':
   printf("\nChoose:\n \n\t'E' for.\t \n\t'I' for.\t \n\t'N' for.\n");
   scanf("%s",&tri);
   switch(tri)
    {
     case 'E':
       printf("\nChoose:\n \n\t'P' for Perimeter.\t \n\t'A' for Area.\n");
       scanf("%s",&sol);
       switch(sol)
	{
	 case 'P':
	   printf("\nEnter side\n");
	   scanf("%d",&l);
	   pr = 3 * l;
	   printf("\nAns = %d\n",pr);
	   break;
	 case 'A':
	   printf("\nEnter side\n");
	   scanf("%d",&l);
	   base = 3;
	   expo = 1/2;
	   ar = (1 * pow(base,expo) * 1 * 1) / 4;
	   printf("\nAns = %d",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'I':
       printf("\nChoose:\n \n\t'P' for Perimeter.\t \n\t'A' for Area.\n");
       scanf("%s",&sol);
       switch(sol)
	{
	 case 'P':
	   printf("\nEnter side (side which have same value)\n");
	   scanf("%d",&l);
	   printf("\nEnter other side\n");
	   scanf("%d",&b);
	   pr = 2 * l * b;
	   printf("\nAns = %d",pr);
	   break;
	 case 'A':
	   printf("\nEnter Breath\t \tAnd\t \tHeight\n");
	   scanf("%d %d",&b,&h);
	   ar = b * h / 2;
	   printf("\nAns = %d",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'N':
       printf("\nChoose:\n \n\t'P' for Perimeter.\t \n\t'A' for Area.\n");
       scanf("%s",&sol);
       switch(sol)
	{
	 case 'P':
	   printf("\nEnter side 1\t \tside 2\t \tside 3\n");
	   scanf("%d %d %d",&l,&b,&B);
	   pr = 1 + b + B;
	   printf("\nAns = %d",pr);
	   break;
	 case 'A':
	   printf("\nEnter side\t \tAnd\t \tHeight\n");
	   scanf("%d %d",&l,&h);
	   ar = 0.5 * l * h;
	   printf("\nAns = %d",ar);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     default:
       printf("\nWrong Statement\n");
       break;
    }
   break;
 case 'D':
   printf("\nChoose:\n \n\t'C' for cube.\t \n\t'c' for cuboid.\t \n\t'y' for cylinder.\t \n\t'O' for Cone.\t \n\t'H' for Hemisphere\t \n\t'S' for Sphere\n");
   scanf("%s",&thirdshape);
   switch(thirdshape)
    {
     case 'C':
       printf("\nChoose:\n \n\tL for Lateral Surface Area.\t \n\tT for Total Surface Area.\t \n\tV for Volume.\n");
       scanf("%s",&cal);
       switch(cal)
	{
	 case 'L':
	   printf("\nEnter side\n");
	   scanf("%d",&s);
	   LSA = 4 * s * s;
	   printf("\nAns = %d\n",LSA);
	   break;
	 case 'T':
	   printf("\nEnter side\n");
	   scanf("%d",&s);
	   TSA = 6 * s * s;
	   printf("\nAns = %d\n",TSA);
	   break;
	 case 'V':
	   printf("\nEnter side\n");
	   scanf("%d",&s);
	   V = s * s * s;
	   printf("\nAns = %d\n",V);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'c':
       printf("\nChoose:\n \n\tL for Lateral Surface Area.\t \n\tT for Total Surface Area.\t \n\tV for Volume.\n");
       scanf("%s",&cal);
       switch(cal)
	{
	 case 'L':
	   printf("\nEnter Length\n");
	   scanf("%d",&l);
	   printf("\nEnter Breath\n");
	   scanf("%d",&b);
	   printf("\nEnter Height\n");
	   scanf("%d",&h);
	   LSA = 2 * (l + b) * h;
	   printf("\nAns = %d\n",LSA);
	   break;
	 case 'T':
	   printf("\nEnter Length\n");
	   scanf("%d",&l);
	   printf("\nEnter Breath\n");
	   scanf("%d",&b);
	   printf("\nEnter Height\n");
	   scanf("%d",&h);
	   TSA = 2 * (l * b + b * h + l * h);
	   printf("\nAns = %d\n",TSA);
	   break;
	 case 'V':
	   printf("\nEnter Length\n");
	   scanf("%d",&l);
	   printf("\nEnter Breath\n");
	   scanf("%d",&b);
	   printf("\nEnter Height\n");
	   scanf("%d",&h);
	   V = l * b * h;
	   printf("\nAns = %d\n",V);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'y':
       printf("\nChoose:\n \n\tC for Curved Surface Area.\t \n\tT for Total Surface Area.\t \n\tV for Volume.\n");
       scanf("%s",&cal);
       switch(cal)
	{
	 case 'C':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   printf("\nEnter Height\n");
	   scanf("%d",&h);
	   CSA = 2 * pi * r * h;
	   printf("\nAns = %d\n",CSA);
	   break;
	 case 'T':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   printf("\nEnter Height\n");
	   scanf("%d",&h);
	   TSA = (2 * pi * r * r) + (2 * pi * r * h);
	   printf("\nAns = %d\n",TSA);
	   break;
	 case 'V':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   printf("\nEnter Height\n");
	   scanf("%d",&h);
	   V = pi * r * r * h;
	   printf("\nAns = %d\n",V);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'O':
       printf("\nChoose:\n \n\t'C' for Curved Surface Area.\t \n\t'T' for Total Surface Area.\t \n\t'V' for Volume.\n");
       scanf("%s",&cal);
       switch(cal)
	{
	 case 'C':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   printf("\nEnter Length\n");
	   scanf("%d",&l);
	   CSA = pi * r * l;
	   printf("\Ans = %d",CSA);
	   break;
	 case 'T':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   printf("\nEnter Length\n");
	   scanf("%d",&l);
	   TSA = pi * r * (r + l);
	   printf("\nAns = %d",TSA);
	   break;
	 case 'V':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   printf("\nEnter Height\n");
	   scanf("%d",&h);
	   V = (1 * pi * r * r * h) / 3;
	   printf("\nAns = %d",V);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'H':
       printf("\nChoose:\n \n\t'C' for Curved Surface Area.\t \n\t'T' for Total Surface Area.\t \n\t'V' for Volume.\n");
       scanf("%s",&cal);
       switch(cal)
	{
	 case 'C':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   CSA = 2 * pi * r * r;
	   printf("\nAns = %d",CSA);
	   break;
	 case 'T':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   TSA = 3 * pi * r * r;
	   printf("\nAns = %d",TSA);
	   break;
	 case 'V':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   V = (2 * pi * r * r * r) / 3;
	   printf("\nAns = %d",V);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     case 'S':
       printf("\nChoose:\n \n\t'S' for Surface Area.\t \n\t'V' for Volume.\n");
       scanf("%s",&cal);
       switch(cal)
	{
	 case 'S':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   SA = 4 * pi * r * r;
	   printf("\nAns = %d",SA);
	   break;
	 case 'V':
	   printf("\nEnter radius\n");
	   scanf("%d",&r);
	   V = (4 * pi * r * r * r) / 3;
	   printf("\nAns = %d",V);
	   break;
	 default:
	   printf("\nWrong Statement\n");
	   break;
	}
       break;
     default:
       printf("\nWrong Statement\n");
       break;
    }
   break;
 default:
   printf("\nWrong Statement\n");
   break;
}
getch();
}