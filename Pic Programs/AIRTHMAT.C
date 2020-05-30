#include<stdio.h>
#include<conio.h>
void main()
{
	int add,sub,multi,div,mod,x,y;
	clrscr();
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Enter value of y : " );
	scanf("%d",&y);
	add=x+y;
	sub=x-y;
	multi=x*y;
	div=x/y;
	mod=x%y;
	printf("\nAddition = %.d",add);
	printf("\nsubtraction = %d",sub);
	printf("\nMultiplication = %d",multi);
	printf("\nDivision = %d",div);
	printf("\nModulas = %d",mod);
	getch();
}