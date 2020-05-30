#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,w;
	int *p=&a,*q=&b;
	menu:
	clrscr();
	printf("Enter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);
	printf("\n1 - Addition Using Pointer.\n2 - Substraction Using Pointer.\n3 - Multiplication Using Pointer.\n4 - Division Using Pointer.");
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&c);
	if(c==1)
	{
		printf("\nAddition Of Numbers Using Pointer Is : %d", *p + *q);
		printf("\n\nIf You Want To Continue.. Press 1 : ");
		scanf("%d",&w);
		if(w==1)
		{
			goto menu;
		}
		else
		{
			printf("\n\nIf You Want To Exit.. Press Enter.");
			goto label;
		}
	}
	else if(c==2)
	{
		printf("\nSubstraction Of Numbers Using Pointer Is : %d",*p - *q);
		printf("\n\nIf You Want To Continue.. Press 1 : ");
		scanf("%d",&w);
		if(w==1)
		{
			goto menu;
		}
		else
		{
			printf("\n\nIf You Want To Exit.. Press Enter.");
			goto label;
		}
	}
	else if(c==3)
	{
		printf("\nMultiplacation Of Numbers Using Pointer Is : %d",*p * *q);
		printf("\n\nIf You Want To Continue.. Press 1 : ");
		scanf("%d",&w);
		if(w==1)
		{
			goto menu;
		}
		else
		{
			printf("\n\nIf You Want To Exit.. Press Enter.");
			goto label;
		}
	}
	else if(c==4)
	{
		printf("\nDivision Of Two Numbers Using Pointer Is : %.2f",(float)*p / *q);
		printf("\n\nIf You Want To Continue.. Press 1 : ");
		scanf("%d",&w);
		if(w==1)
		{
			goto menu;
		}
		else
		{
			printf("\n\nIf You Want To Exit.. Press Enter.");
			goto label;
		}
	}
	else
	{
		printf("\n\nSorry.. Invalid Option.\n\nPress 1 For Continue.. : ");
		scanf("%d",&w);
		if(w==1)
		{
			goto menu;
		}
		else
		{
			printf("If You Want To Exit.. Press Enter : ");
			goto label;
		}
	}
	label:
	getch();
}