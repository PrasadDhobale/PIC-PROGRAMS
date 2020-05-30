#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter any character");
	//scanf("%c",&ch);
	ch=getchar();
	putchar(ch);
	if((ch>=65)&&(ch<=90))
	{
		if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
		{
			printf("Its Capital Vowel..");
		}
		else
		{
			printf("Its Capital Character..");
		}
	}
	if((ch>=97)&&(ch<=122))
	{
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
		{
			printf("Its Small Vowel..");
		}
		else
		{
			printf("Its Small Character");
		}
	}
	else if((ch>=48)&&(ch<=57))
	{
		printf("Its Possitive Number");
	}
	else
	{
		printf("ITs Other Caracter");
	}
	getch();
}

