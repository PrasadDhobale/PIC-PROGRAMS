#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],i,j;
	clrscr();
	printf("Enter Values for Display :\n");
	for(i=0;i<2;i++)
	{
	 for(j=0;j<2;j++)
	 {
		scanf("%d",&a[i][j]);
	 }
	}
	printf("Two Dimensional Array are :\n");
	for(i=0;i<2;i++)
	{
	 for(j=0;j<2;j++)
	 {
		printf("%2d",a[i][j]);
	 }
	 if(j==2)
	 printf("\n");
	}
	getch();
}