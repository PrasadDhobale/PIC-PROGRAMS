#include<stdio.h>
#include<conio.h>
void main()
{
	char gr;
	clrscr();
	printf("\nENter any character:");
	scanf("%c",&gr);
	switch(gr)
	{
		case 'A':printf("\nITS VOWEL");
		break;
		case 'E':printf("\nITS VOWEL");
		break;
		case 'I':printf("\nITS VOWEL");
		break;
		case 'O':printf("\nVowel");
		break;
		case 'U':printf("\nVOWEL");
		break;
		default:printf("\nINVALID CHARACTER");
	}

	getch();
}