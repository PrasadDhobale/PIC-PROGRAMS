#include <stdio.h>
#include <stdlib.h>

/* Reverse of number.. */

int main() {
	
	int n,r,sum=0,num;
	printf("Enter any number");
	scanf("%d",&n);//123
	num=n;
	do
	{
		r=n%10;//123%10=3  12%10=2  1%10=1
		sum=sum+r;//0+3=3+2=5+1=6
	//	printf("%d",r);//321
		n=n/10;//123/10=12  12/10 =1  1/10=0
	}while(n!=0);
	printf("\nSUm of digit %d no is %d",num,sum);
}