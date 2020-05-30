#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int arr[5]={10,20,30,40,50};
	int *p=&n;
	int i;
	printf("\nfirst value %d",*p);//10
	printf("\nsecond value %d",*(p+1));//11
	printf("\nthird value %d",*(p+2));
	printf("\nfourth value %d",*(p+3));
	printf("\nfifth value %d",*(p+4));
	//same outout using loop
	for(i=0;i<5;i++){
		printf("%d ",*(p+i));//10 20 30 40 50
		//p++;
	}
	
	return 0;
}