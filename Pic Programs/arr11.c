#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i;
	clrscr();
	printf("\nEnter any five elements in Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nElements in array are\n");
	for(i=0;i<5;i++)
	{
	printf("%5d",arr[i]);
	}
	getch();
}