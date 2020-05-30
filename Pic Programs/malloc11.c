#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	int *n,x;
	int i,sum=0;
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
//	printf("\n%d",*n);//0
return 0;
}