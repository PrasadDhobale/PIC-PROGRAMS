#include<stdio.h>
#include<conio.h>
struct Student
{
	int rno;
	char name[10];
	int m1,m2,m3,tot;
	float per;
}; 
void main()
{
	struct Student s1;
	clrscr();
	printf("\nEnter Reg No");
	scanf("%d",&s1.rno);
	printf("\nEnter Your Name");
	scanf("%s",s1.name);
printf("\nEnter Marks for three subject");
scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
	s1.tot=s1.m1+s1.m2+s1.m3;
	s1.per=s1.tot/3;
	
printf("\nReg No : %d",s1.rno);
printf("\nName : %s",s1.name);
printf("\nMath : %d",s1.m1);
printf("\nElect : %d",s1.m2);
printf("\nComp : %d",s1.m3);
printf("\nTotal : %d",s1.tot);
printf("\nPerct : %f",s1.per);

getch();
}