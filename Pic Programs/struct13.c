#include<stdio.h>
#include<conio.h>
struct Student
{
	int rno;
	char name[10];
}; 
void main()
{
	int i;
	struct Student s1[3];
	clrscr();

	for(i=0;i<3;i++)
	{
	printf("\nEnter Reg No");
	scanf("%d",&s1[i].rno);

	printf("\nEnter Your Name");
	scanf("%s",s1[i].name);
	}
	
	for(i=0;i<3;i++)
	{
printf("\n-------------------------------------------");
printf("\nReg No : %d",s1[i].rno);
printf("\nName : %s",s1[i].name);
	}
getch();
}