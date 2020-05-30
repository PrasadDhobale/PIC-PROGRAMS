#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10];
	int i,j,cnt=0;
	clrscr();
	printf("\nEnter Your First String : ");
	scanf("%s",s1);
	printf("\nEnter Your Second String : ");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		cnt++;
	}
	for(i=0,j=0;s2[j]!='\0';j++,i++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("After Copy String 1 is : %s",s1);
	printf("\nAfter Copy String 2 is : %s",s2);
	getch();
}