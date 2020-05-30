#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
	int ch,x,n,p;
	int arr[max],i,cnt=0;
	clrscr();
	do
	{
	printf("1-create\n2-insert\n3-delete\n
4-search\n5-display");
	printf("\nEnter your choice...");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
printf("\nhow many nos do you want in array");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	break;
	case 2:
printf("\nEnter no and possition to insert 
elments in array");
scanf("%d%d",&x,&p);
		for(i=n-1;i>=p-1;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[i+1]=x;
		n++;
	break;
	
	case 3:
	printf("\nEnter no to delete from array");
	scanf("%d",&x);
		for(i=0;i<n;i++)
		{
			if(arr[i]==x)
			{
				j=i;
				break;
			}
		}
		for(i=j;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		n--;
	break;
	case 4:
	printf("\nEnter no to search from array");
	scanf("%d",&x);

		for(i=0;i<n;i++)
		{
			if(arr[i]==x)
			{
				break;
			}
		}
		if(i<n)
		{
printf("%d element found in list at %d possition",x,(i+1));
		}
		else
		{
printf("%d element not found in list",x);
		}
	break;
	case 5:
		for(i=0;i<n;i++)
		{
			printf("%5d",arr[i]);
		}
	break;
	}
	printf("\nDO you want to continue PRESS 1");
	scanf("%d",&ch);
	}while(ch==1);
	printf("\nThank you...");
getch();
}
