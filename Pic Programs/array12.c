#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],ecnt=0,ocnt=0;
	int sum=0;
	clrscr();
	printf("Enter any ten nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)//5
	{
		if(arr[i]%2==0)//1
		{
			ecnt++;//3
		}
		else
		{
			ocnt++;//3
		}
	}
	printf("\nTotal Even nos are : %d",ecnt);
	printf("\nTotal Odd nos are : %d",ocnt);

	getch();
}

