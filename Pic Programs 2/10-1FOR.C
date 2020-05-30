#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,x=1;
	clrscr();
	printf("Enter Any Number : ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)      //perfect number ex = 28    ans perfect
	  {
	     if(n%i==0)
	      x=x+i;
	  }
	  if(x==n)
	  printf("Perfect Number.");
	  else
	  printf("Not Perfect Number.");

	getch();
}