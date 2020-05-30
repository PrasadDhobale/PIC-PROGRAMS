#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1=10; 
	int *p1=&n1;
	printf("Value of n1 is :%d",n1);
	printf("Addres of n1 is : %u",&n1);
printf("\nValue of n1 using Pointer p1 is : %d",*p1);
printf("\nAddress of n1 using Pointer p1 is : %u",p1);
printf("\nAddress of p1 is : %u",&p1);
	return 0;
}