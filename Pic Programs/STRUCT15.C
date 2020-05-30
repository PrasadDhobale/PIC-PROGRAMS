#include<stdio.h>
#include<conio.h>
struct Student
{
	int rno;
	char name[10];
}; 

void display(struct Student);
struct Student accept();
void main()
{

	struct Student a=accept();
	display(a);	
getch();
}
struct Student accept()
{
	struct Student s1;
	
	printf("\nEnter Reg No");
	scanf("%d",&s1.rno);

	printf("\nEnter Your Name");
	scanf("%s",s1.name);
	return s1;
}
void display(struct Student s1)
{
printf("\n-------------------------------------------");
printf("\nReg No : %d",s1.rno);
printf("\nName : %s",s1.name);

}