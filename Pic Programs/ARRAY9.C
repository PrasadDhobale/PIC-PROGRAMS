#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,min,max,sum,avg;
	clrscr();
	printf("Enter any ten nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		else if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\nSmall no is : %d",min);
	printf("\nGreater no is : %d",max);
	getch();
}

