#include<stdlib.h>
void main()
{
	int arr[5];//array allcates memori for 5 int
	int *n,x;
	int i;
	clrscr();

	printf("\nHow many nos do you want ");
	scanf("%d",&x);//5
	//here we are allocating memeory at runtime
	n=(int*)malloc(sizeof(int)*x);//20 bytes
	printf("\nenter %d nos",x);
	for(i=0;i<x;i++)
	{
		scanf("%d",(n+i));
	}
	printf("\nYOUR NOS ARE");
	for(i=0;i<x;i++)
	{
		printf("%5d",*(n+i));//10 20 30 40 50
	}
	//release memory allocated by malloc.
	for(i=0;i<x;i++)
	{
		printf("\nIN Free %d",*(n+i));//10 20
		free(n+i);
	}
printf("\nYOUR NOS ARE AFTER FREE");
	for(i=0;i<x;i++)
	{
	printf("%5d",*(n+i));
	}
	getch();
}
