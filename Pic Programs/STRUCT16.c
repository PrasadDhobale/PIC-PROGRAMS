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
	clrscr();
	struct Student s1;
	union Employee e1;
printf("\nSize of Structure is : %d",sizeof(s1));
printf("\nSize of Union is : %d",sizeof(e1));


	printf("\nEnter Reg No");
	scanf("%d",&s1.rno);
	printf("\nEnter Your Name");
	scanf("%s",s1.name);
printf("\n-------Structure-----------------------------");
printf("\nReg No : %d",s1.rno);
printf("\nName : %s",s1.name);

	printf("\nEnter EMployee Id");
	scanf("%d",&e1.eid);
	printf("\nEnter Employee Name");
	scanf("%s",e1.ename);
printf("\n-------Union-----------------------------");
printf("\nEmp No : %d",e1.eid);
printf("\nName : %s",e1.ename);



}