#include<stdio.h>
#include<conio.h>

void main()
{
	int ch;
	clrscr();
	printf("ENter any number");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Mon");

	case 2:
		printf("Tue");
	case 3:
		printf("Wen");
		break;
	default:
		printf("Invalid Day");
	}
	printf("Thankyou..");
getch();
}



