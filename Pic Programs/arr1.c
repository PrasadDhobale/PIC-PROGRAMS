#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i;
	clrscr();
	printf("\nEnter any five nos");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("\n----EMENTS IN ARRAY ARE---");
	for(i=0;i<5;i++)
	{
	printf("%d",arr[i]);
	}
	getch();
	
}