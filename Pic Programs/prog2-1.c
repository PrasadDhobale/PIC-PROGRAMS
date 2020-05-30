#include <stdio.h>
/* Addition of two nos */

int main() 
{
	int no1,no2,ans;//declaration Section
	printf("Enter any two nos");
	scanf("%d%d",&no1,&no2);
	ans=no1+no2;
	printf("\n---------ADDITION----------------");
	printf("\n\tNumber1\t\t : %d",no1);
	printf("\n\tNumber2\t\t : %d",no2);
	printf("\n\tAddition is\t\t : %d",ans);
	return 0;
}