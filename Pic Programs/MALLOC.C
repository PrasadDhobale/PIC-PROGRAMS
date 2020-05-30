#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
void main()
{
	int sum=0,i;
	int *n,x;
	clrscr();
	n=(int*)malloc(sizeof(int));
	printf("\nEnter Any Number : ");
	do
	{
	       scanf("%d",(n));
	       sum=sum+ *n;
	       x=*n;
	}while(x!=0);//*n!=0;
	printf("\nSum Is  : %d",sum);
	getch();
}
