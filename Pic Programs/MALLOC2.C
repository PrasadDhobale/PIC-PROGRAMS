#include<stdlib.h>
void main()
{
	int *n,x;
	int i,sum=0;
	clrscr();

	do
	{
	n=(int*)malloc(sizeof(int)*x);
	printf("\nenter nos");
	scanf("%d",(n));
	sum=sum+*n;

	}while(*n!=0);
	printf("\nSUM OF YOUR NOS IS %d",sum);
	getch();
}
