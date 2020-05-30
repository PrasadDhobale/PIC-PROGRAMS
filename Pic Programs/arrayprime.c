#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10];
	int i,j,cnt=0,flag;
	clrscr();
	printf("Enter any ten nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		flag=1;
		n=arr[0];
		for(j=2;j<n;j++)
		{
			if(n%j==0)
			{	
				flag=0;
				break;
			}	
		}
		if(flag==0)
		{
			cnt++;
		}
	}
	printf("\nTotal Prime nos are : %d",cnt);
	getch();
}

