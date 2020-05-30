#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int r,x;
	char name[15],gr;
	char result[10];
	int s1,s2,s3,total;
	float perct;
	menu:
	clrscr();

	printf("\nEnter Your Roll Number : ");
	scanf("%d",&r);

	printf("\nEnter your Name : ");
	scanf("%s",&name);

	printf("\nEnter Marks of English : ");
	scanf("%d",&s1);

	printf("\nEnter Marks of Mathematics : ");
	scanf("%d",&s2);

	printf("\nEnter Marks of Science : ");
	scanf("%d",&s3);

	total=s1+s2+s3;
	perct=total/3;

	printf("\nYour Total : %d",total);
	printf("\nYou got : %.2f %",perct);

	if((s1>=35)&&(s2>=35)&&(s3>=35))
	 {
	     strcpy(result,"PASS");
	      if((perct>=40)&&(perct<=60))
		{
			gr='C';
		}
	      else if((perct>=61)&&(perct<=80))
		{
			gr='B';
		}
	      else if((perct>=81)&&(perct<=100))
		{
			gr='A';
		}

	 }
	 else
	 {
		strcpy(result,"FAIL");
		 if((perct>=1)&&(perct<=34))
		  {
			gr='-';
		  }

	 }

	 clrscr();
	 printf("\n\n\n\n\t\t````````````````````````````````````````");
	 printf("\n\t\t\tRoll No\t\t : %d",r);
	     if((r>=1)&&(r<=25))
		{
		  printf("\n\t\t\tYou are in       : A Batch.");
		}
		else if((r>=26)&&(r<=50))
		{
		  printf("\n\t\t\tYou are in       : B Batch.");
		}
		else if((r>=51)&&(r<=69))
		{
		  printf("\n\t\t\tYou are in       : C Batch.");
		}
		else
		{
		  printf("\n\t\t\tInvalid Roll Number.");
		}
	 printf("\n\t\t\tName\t\t : %s",name);
	 printf("\n\t\t\tEnglish\t\t : %d",s1);
	 printf("\n\t\t\tMathematics\t : %d",s2);
	 printf("\n\t\t\tScience\t\t : %d",s3);
	 printf("\n\t\t\tTotal\t\t : %d",total);
	 printf("\n\t\t\tPercent\t\t : %.2f",perct);
	 printf("\n\t\t\tResult\t\t : %s",result);
	 printf("\n\t\t\tGrade\t\t : %c",gr);
	 printf("\n\t\t````````````````````````````````````````");
	 /*
	 printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	 printf("\nRollNo.\tName\tEnglish\tMaths\tScience\tTotal\tPercent\tResult\tGrade");
	 printf("\n\n  %d\t %s\t %d\t %d\t %d\t %d\t %.2f\t %s\t %c",r,name,s1,s2,s3,total,perct,result,gr);
	 printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	 */
	 printf("\n\t\t----------------------------------------");
	 printf("\n\n\t\t    If You Want To Continue..Press 1.");
	 printf("\n\t\t----------------------------------------");
	 scanf("%d",&x);
	 printf("\n\t\t----------------------------------------");
	 if(x==1)
	  {
	  goto menu;
	  }
	 else
	 {
	  printf("\n\n\t\t    If You want to Exit..Press Enter.");
	  printf("\n\t\t----------------------------------------");
	 }
	 getch ();
}