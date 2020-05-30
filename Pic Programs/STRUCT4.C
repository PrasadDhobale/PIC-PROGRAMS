#include<stdio.h>
#include<conio.h>
union Student
{
	int rno;
	char name[10];
};
void main()
{
	union Student s1;
	clrscr();
	printf("\nEnter Your Roll No");
	scanf("%d",&s1.rno);
	printf("\nROll No : %d",s1.rno);

	printf("\nEnter Your Name");
	scanf("%s",s1.name);
       //	printf("\n\n");
	printf("\nName : %s",s1.name);
	getch();
}