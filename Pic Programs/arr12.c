#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],cnt=0;
	int i;
	clrscr();
	printf("\nEnter any ten nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			ecnt++;//1
			esum=esum+arr[i];
		}
		else
		{
			ocnt++;
			osum=osum+arr[i];
		}
	}
	printf("\nSum of %d even nos is : %d",ecnt,esum);
	printf("\nSum of %d odd nos is : %d",ocnt,osum);
getch();
}