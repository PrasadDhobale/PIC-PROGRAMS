#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,ecnt=0,ocnt=0;
	int esum=0,osum=0;
	clrscr();
	printf("Enter any ten nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			ecnt++;
			esum=esum+arr[i];
		}
		else
		{
			ocnt++;
			osum=osum+arr[i];
		}
	}
	printf("\nSum of %d even nos are : %d",ecnt,esum);
	printf("\nSum of %d Odd nos are : %d",ocnt,osum);
	getch();
}

