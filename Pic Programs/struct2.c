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
printf("\nSize of Structure Student is : %d",sizeof(s1));//12
for(i=0;i<3;i++)
{
	printf("\nEnter Roll No");
	scanf("%d",&s1[i].rno);
	prnitf("\nENter Your Name");
	scanf("%s",&s1[i].name);
}
printf("\n\n==============================");
for(i=0;i<3;i++)
{
printf("\n----------------------------------------");
	printf("\nRoll No : %d",s1[i].rno);
	printf("\nName : %s",s1[i].name);
}
getch();
}