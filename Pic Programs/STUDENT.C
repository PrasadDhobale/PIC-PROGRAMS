#include<stdio.h>
#include<conio.h>
void main()
{
	int rno;
	char name[10];
	int s1,s2,s3,tot;
	float per;
	clrscr();
	printf("\nEnter Student Roll No");
	scanf("%d",&rno);
	printf("\nEnter Student Name");
	scanf("%s",name);
	printf("\nEnter Marks for three Subject");
	scanf("%d%d%d",&s1,&s2,&s3);

	tot=s1+s2+s3;
	per=tot/3;

	printf("\nRoll No : %d",rno);
	printf("\nName : %s",name);
	printf("\nMath : %d",s1);
	print("\nElect : %d",s2);
	printf("\nComp : %d",s3);
	printf("\nTotal : %d",tot);
	printf("\nPerct : %f",per);
	getch();

}