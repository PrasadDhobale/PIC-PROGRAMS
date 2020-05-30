#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int n=10;
	int *p=&n;//one * means address of normal variable
	int **p2=&p//** means address of another pointer variable
	printf("\nValue of n is : %d",n);//65535
	printf("\nAddress of n is : %u",&n);
	printf("\n\nValue of n using Pointer is : %d",*p);//10
	printf("\nAddress of n is using Pointer : %u",p);//1000
	printf("\nAddress of p is  : %u",&p);//2000
	//i want to print value of n using p2 variable..
	printf("\n\nValue of n using P2 var is :%d ",**p2);//10
	printf("\nAddress of n using p2 : %u ",*p2);//1000
	printf("\nAdderss of p using p2 is : %u",p2);//2000
	printf("\n\nAddress of p2 is : %u",&p2);
	return 0;
}