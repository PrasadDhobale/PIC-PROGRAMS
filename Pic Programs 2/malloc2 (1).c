#include<stdlib.h>
void main()
{
	int *n,x;
	int i,sum=0;
	clrscr();
	do
	{
	n=(int*)malloc(sizeof(int));
	printf("\nenter nos");
	scanf("%d",(n));
	sum=sum+*n;//0+10=10+20=30+25=55+15=70+0=70
	}while(*n!=0);
	printf("\nSUM OF YOUR NOS IS %d",sum);//70
	printf("\n%d",*n);//0
	getch();
}
