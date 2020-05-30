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


	printf("\n\tENTER HOW MANY NUMBERS TO REALLOCATE:\n");
	scanf("%d",&new_l);//2

	ptr=(int*)realloc(ptr,new_l);
l1=l;//5                                                                l1=5
l=l+new_l;//5+2=7    l=7
printf("\n\nENTER new ELEMENTS\n\n");
for(i=l1;i<l;i++)
{
  scanf("%d\n",(ptr+i));//60  70
}
printf("Reallocated ELEMENTS ARE:\n");
for(i=l1;i<l;i++)
{
  printf("%d\n",*(ptr+i));//60  70
}
free(ptr);
printf("PRINTING NUMBERS AFTER FREE\n");
 for(i=0;i<l;i++)
 {
   printf("%d\n",*(ptr+i));
 }
 getch();
}