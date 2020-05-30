#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0;
	clrscr();
	printf("Enter Any Number : ");
	scanf("%d",&n);
	do
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}while(n!=0);
	printf("%d",sum);
	getch();
}