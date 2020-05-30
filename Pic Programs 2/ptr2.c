#include <stdio.h>
#include <stdlib.h>
/ run this program using the console pauser or add your own getch, system("pause") or input loop /
int main() {
	int n1=10;
	int *p1=&n1;
	printf("Value of n1 is : %d",n1);//10
	printf("\nAddress of n1 is : %u",&n1);//22...
	printf("\nValue of n1 is Using Pointer var p1 : %d",p1);//10
	printf("\nAddress of n1 using Poiter var p1 is : %u",p1);
	printf("\nAddress of p1 is : %u",&p1);
	return 0;
}