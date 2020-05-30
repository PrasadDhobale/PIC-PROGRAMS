#include<stdio.h>
#include<conio.h>
struct Student
{
	int sid;
	char name[10];
}s1;
union Employee
{
	int eid;
	char ename[10];
}e1;
void main()
{
clrscr();
printf("\nSize of struct is : %d",sizeof(s1));
printf("\nSize of union is : %d",sizeof(e1));
printf("\nEnter data for sturtcture..no and name");
scanf("%d%s",&s1.sid,s1.name);


printf("\nEnter data for union ..empid,name);
scanf("%d%s",&e1.eid,e1.ename);
printf("\nStructure Data");
printf("\nSID : %d",s1.sid);
printf("\nSNAME : %s",s1.sname);

printf("\nUnion Data");
printf("\nEMp Id : %d",e1.eid);
printf("\nEMp Name : %s",e1.ename);

getch();
}