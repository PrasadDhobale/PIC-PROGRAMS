#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
//Declaration Section

	int rno;
	char name[15],gr='\0';
	char result[10];
	int sub1,sub2,sub3,total=0;
	float per;

	clrscr();
	printf("\nEnter roll no");
	scanf("%d",&rno);
	printf("\nEnter Your name");
	scanf("%s",name);
	printf("\nENter marks for three subject");
	scanf("%d%d%d",&sub1,&sub2,&sub3);

	total=sub1+sub2+sub3;
	per=total/3;

	/*
	printf("\n\t\tRoll No\t\t : %d",rno);
	printf("\n\t\tName\t\t : %s",name);
	printf("\n\t\tMath\t\t : %d",sub1);
	printf("\n\t\tElect\t\t : %d",sub2);
	printf("\n\t\tComp\t\t : %d",sub3);
	printf("\n\t\tTotal\t\t : %d",total);
	printf("\n\t\tPerct\t\t : %f",per);
	 */
	if((sub1>=40)&&(sub2>=40)&&(sub3>=40))
	{
		strcpy(result,"PASS");
		if((per>=40)&&(per<60))
		{
			gr='C';
		}
		else if((per>=60)&&(per<75))
		{
			gr='B';
		}
		else
		{
			gr='A';
		}
	}
	else
	{
		strcpy(result,"FAIL");
	}
	printf("\n---------------------------------------------------------------");
	printf("\nROLLNO\tNAME\tMATH\tCOMP\tELECT\tTOTAL\tPERCT\tRESULT\tGRADE");
	printf("\n---------------------------------------------------------------");
	printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f\t%s\t%c",rno,name,sub1,sub2,sub3,total,per,result,gr);
	printf("\n-----------------------------------------------------------------");



	/*
	if((sub1>=40)&&(sub2>=40)&&(sub3>=40))
	{
		printf("\n\t\tRESULT\t\t : PASS");
		if((per>=40)&&(per<60))
		{
			gr='C';
		}
		else if((per>=60)&&(per<75))
		{
			gr='B';
		}
		else
		{
			gr='A';
		}
		printf("\n\t\tGrade\t\t:%c",gr);

	}
	else
	{
		printf("\n\t\tRESULT\t\t : FAIL");
	} */
	getch();
}

