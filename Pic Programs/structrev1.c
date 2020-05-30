#include<stdio.h>
#include<conio.h>
struct Student
{
	int rno;
	char name[10];
};
void main()
{
	struct Student s1;
	clrscr();
	printf("\nEnter roll no,name");
	scanf("%d%s",&s1.rno,s1.name);
	
	printf("\nRoll No : %d",s1.rno);
	printf("\nName : %s",s1.name);
	getch();
}
