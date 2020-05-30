#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	clrscr();
	printf("Enter any ten nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);

		if((arr[i]%5==0)&&(arr[i]%3==0))
		{
			cnt1++;
		}
		else if(arr[i]%5==0)
		{
			cnt2++;
		}
		else if(arr[i]%3==0)
		{
			cnt3++;
		}
		else
		{
			cnt4++;
		}
	}
	printf("\nTotal no div by 5 and 3 are : %d",cnt1);
	printf("\nTotal no div by 5 are : %d",cnt2);
	printf("\nTotal no div 3 are : %d",cnt3);
	printf("\nTotal no not div by 5 and 3 are : %d",cnt4);

	getch();
}
