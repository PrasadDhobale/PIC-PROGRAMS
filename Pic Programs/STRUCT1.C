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
printf("\nSize of Structure Student is : %d",sizeof(s1));//12

printf("\nEnter Roll No");
scanf("%d",&s1.rno);
prnitf("\nENter Your Name");
scanf("%s",&s1.name);

printf("\nRoll No : %d",s1.rno);
printf("\nName : %s",s1.name);
getch();
}