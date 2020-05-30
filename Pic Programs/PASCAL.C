#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,z;
	clrscr();
	n=5;
	z=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=z;k++)
		{
			printf("*");
		}
		printf("\n");
		z=z+2;//1+2=3+2=5+2=7+2=9
	}
	getch();
}