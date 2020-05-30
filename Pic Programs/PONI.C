#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter Any Number : ");
	scanf("%d",&n);
	if(n<0)
	printf("The Entered Number is Negative.");
	else
	printf("The Entered Number is Positive.");
	getch();
}