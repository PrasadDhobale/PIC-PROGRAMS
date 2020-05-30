#include<stdio.h>
#include<conio.h>
struct Student
{
	int rno;
	char nm[10];
	
};
void display(struct Student);
void main()
{
	clrscr();
	struct Student s1;
	printf("\nENter Rno ,name);
	scanf("%d%s",&s1.rno,s1.nm);
	display(s1);
	getch();
}
void display(struct Student s1)
{
	printf("\nRno : %d",s1.rno);
	printf("\nName : %s",s1.nm);
}