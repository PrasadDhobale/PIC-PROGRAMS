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
struct Student *s1;
clrscr();
	printf("\nEnter Roll No");
	scanf("%d",s1->rno);
	prnitf("\nENter Your Name");
	scanf("%s",s1->name);
printf("\n\n==============================");
printf("\nRoll No : %d",s1->rno);
printf("\nName : %s",s1->name);
getch();
}