#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,min,max;
	clrscr();
	printf("Enter any ten nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<10;i++)//9
	{
		if(arr[i]<min)//1<2
		{
			min=arr[i];//1
		}
		else if(arr[i]>max)//3>21
		{
			max=arr[i];//21
		}
	}
	printf("\nGreater no is : %d",max);
	printf("\nSmaller no is : %d",min);
	getch();
}
