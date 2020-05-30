#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter Any Number : ");
	scanf("%d",&n);
	i=1;

	while(i<=10)
	{
	  printf("\n%d",i*n);
	  i++;
	}
	getch();
}