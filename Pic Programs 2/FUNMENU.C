#include<stdio.h>
#include<conio.h>
int factor(int);
void factorial(int);
void prime(int);
int power(int,int);
void table(int);
void main()
{
	int ch,n,f,o,chh,ans;
	do
	{
	clrscr();
	printf("Enter the choice as per your requirement\n");
	printf("\n1-Factor");
	printf("\n2-Factorial");
	printf("\n3-Prime number");
	printf("\n4-Power");
	printf("\n5-Table");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the number to find factor");
			scanf("%d",&n);
			printf("Factors of %d are",n);
			f=factor(n);

			break;
		case 2:
			printf("Enter the number to find factorial");
			scanf("%d",&n);
			factorial(n);
			break;
		case 3:
			printf("Enter the number to find prime number");
			scanf("%d",&n);
			prime(n);
			break;
		case 4:
			printf("Enter the numbers to find power");
			scanf("%d%d",&n,&o);
			ans=power(n,o);
			printf("Answer is %d",ans);
			break;
		case 5:
			printf("Enter the number to find table");
			scanf("%d",&n);
			table(n);
			break;
		default:
			printf("Invalid Choice");
			break;
	}
	printf("\nDo you want to continue press 1");
	scanf("%d",&chh);
	}while(chh==1);
	printf("\n-------Thank You-------\n");
	getch();
}
int factor(int n)
{
	int i,f;
	i=2;
	printf("The factors are");
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			printf("%d\t",i);
		i++;
	}
	return f;
}
void factorial(int n)
{
	int i=1,fact=1;
	while(i<n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of %d is %d",n,fact);
}
void prime(int n)
{
	int i=2,x=1;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
		    x=0;
		    break;
		}
		i++;
	}
	if(x==1)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not a prime number");
	}
}
int power(int n,int o)
{
	int ans=1,i=1;
	while(i<=n)
	{
		ans=ans*o;
		i++;
	}
	printf("The answer is %d",ans);
	return ans;
}
void table(int n)
{
	int i=1,table;
	while(i<=10)
	{
		table=n*i;
		printf("%d\n",table);
		i++;
	}
}

