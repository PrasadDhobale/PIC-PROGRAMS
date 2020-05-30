#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int l,i,*ptr,new_l,l1; 
	//int arr[5];
	clrscr();
 
	printf("\nENTER TOTAL NUMBERS:");
	scanf("%d",&l);//5
 
	ptr=(int*)calloc(l,sizeof(int));

	 printf("\nENTER %d NUMBERS\n",l);
	 for(i=0;i<l;i++)
	{
   		scanf("%d",ptr+i);
 	}
 	printf("-----PRINTING NUMBERS-----\n");
 	for(i=0;i<l;i++)
 	{
   		printf("%d\n",*(ptr+i));
 	}
}