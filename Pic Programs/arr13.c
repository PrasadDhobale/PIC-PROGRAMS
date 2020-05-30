#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],cnt=0;
	int n;
	int i;
	clrscr();
	printf("\nEnter any ten nos");
	for(i=0;i<10;i++
	{
		scanf("%d",&arr[i]);
	}
	printf("\nENter no to search in array");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(arr[i]==n)
		{
			cnt++;
		}
	}
	if(cnt>0)
	{
		printf("\n%d no is found at %d times",n,cnt);
	}
	else
	{
		printf("\nElement not found..");
	}
	
	
getch();
}