#include<stdio.h>
#include<conio.h>

void factor(int);
float factorial(int);
int prime(int);
int sumofdigit(int);
int revers(int);
int power(int,int);
void fibbo(int);

void main()
{
	int ch,n,x;
	do
	{
	clrscr();
printf("\n1-Factor\n2-Factorial\n3-Prime\n4-Power\n5-Fibbo");

printf("\nEnter your choice...");
scanf("%d",&ch);//2

	switch(ch)
	{
	case 1:
		printf("Enter any no for factors");
		scanf("%d",&n);//10
		factor(n);
	break;
	case 2:
printf("\nEnter any number for factorial");
scanf("%d",&n);//5
printf("\nFactorial of %d is %d",n,factorial(n));
	break;

	case 3:
	printf("Enter any number");
	scanf("%d",&n);
	x=prime(n);
	if(x)
	{
		printf("Prime No");
	}
	else
	{
		printf("Not Prime No");
	}
	break;
	}
	printf("\nDO you want to continue press 1");
	scanf("%d",&ch);//1
	}while(ch==1);
}
void factor(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		printf("\n%d",i);
		}
	}
}
float factorial(int n)
{
	int ans=1,i;
	for(i=1;i<=n;i++)
	{
	ans=ans*i;
	}
	return ans;	 
}
int prime(int n)
{
	int x=1,i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			x=0;
			break;
		}
	}
	return x;
}