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
		scanf("%d",(n));//10  20  30   40
		printf("\%d",*n);
		sum=sum+*n;//0+10=10+20=30+30=60+40=100+0=100
		x=*n;
		free(n);
	}while(x!=0);
	
	printf("\nSUM OF YOUR NOS IS %d",sum);//100
	printf("\n%d",*n);//0
	getch();
}
