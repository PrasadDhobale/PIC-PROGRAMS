#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void create();
void display();

struct Student
{
	int rno;
	char name[10];
}*tmp;

void main()
{
	int n;
	char choice;
	clrscr();
	do
	{
		create();
		printf("\n");
		display();
		printf("\t\tContinue ? ");
		scanf(" %c",&choice);
	}while(choice=='y');
	getch();
}
void create()
{
	tmp=malloc(sizeof(struct Student));
	printf("\nENter Your Roll no");
	scanf("%d",&tmp->rno);
	printf("\nENter your name");
	scanf("%s",tmp->name);
}
void display()
{
	printf("Reg No :  %d ", tmp->rno);
	printf("Name :  %s ",tmp->name);
}
