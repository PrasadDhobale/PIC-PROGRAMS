#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,l,l1,new_l,*ptr,x,*n;
	clrscr();
	printf("\nEnter total Numbers : ");
	scanf("%d",&l);
	ptr=(int*)calloc(l,sizeof(int));
	printf("\nEnter %d Elements : ",l);
	for(i=0;i<l;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\nEntered Elements Are : ");
	for(i=0;i<l;i++)
	{
		printf("%5d",*(ptr+i));
	}
	printf("\nHow Many Number You Want to Reallocate : ");
	scanf("%d",&new_l);
	ptr=(int*)realloc(ptr,new_l);
	l1=l;
	l=l+new_l;
	printf("\nEnter %d Elements : ",new_l);
	for(i=l1;i<l;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\nEntered Reallocated Elements Are : ");
	for(i=l1;i<l;i++)
	{
		printf("%5d",*(ptr+i));
	}
	getch();
}
