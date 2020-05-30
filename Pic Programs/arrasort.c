#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,j,temp;

printf("\nEnter any ten nos");
for(i=0;i<10;i++)
{	
	scanf("%d",&arr[i]);
}
for(i=0;i<9;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(arr[i]>arr[j])
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;		
		}	
	}
}
printf("\nAsc Oredr is : \n");
for(i=0;i<10;i++)
{
	printf("%5d",arr[i]);
}
printf("\nDesc order is : \n");
for(i=9;i>=0;i--)
{
	printf("\n%5d",arr[i]);
}
}
