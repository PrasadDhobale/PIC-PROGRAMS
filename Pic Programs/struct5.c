#include<stdio.h>
#include<conio.h>
struct Student
{
	int rno;
	char name[10];
};
union Employee
{
	int eid;
	char ename[10];
};
void main()
{
struct Student s1;
union Employee e1;
clrscr();
	printf("\nEnter Roll No");
	scanf("%d",s1->rno);
	prnitf("\nENter Your Name");
	scanf("%s",s1->name);
printf("\n\n==============================");
printf("\nRoll No : %d",s1->rno);
printf("\nName : %s",s1->name);


printf("Enter Employee ID : ");
scanf("%d",&e1.eid);
printf("\nEMP ID : %d",e1.eid)
printf("\nEnter your Name");
scanf("%s",e1.ename);
printf("\nEMP NAME : %s",e1.ename);
getch();
}