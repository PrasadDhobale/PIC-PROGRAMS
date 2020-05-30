#include <stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int *p=&arr;
	printf("\nFirst Value is : %d",*p);//10
	printf("\nSecond Value is : %d",*p+1);//10+1=11
	printf("\nThird Value is : %d",*(p+2));//30
	printf("\nFouth Value is : %d",*(p+3));//40
	printf("\nFifth Value is : %d",*p+4));//14
	
	return 0;
}