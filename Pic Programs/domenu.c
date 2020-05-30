#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	float r,b,h,ca,ta;

	clrscr();
	do
	{
	clrscr();
	printf("\n1-Area of Circle");
	printf("\n2-Area of Triangle ");
	printf("\n3-Area of Rectangle");
	printf("\nEnter Your choice..");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("\nEnter Radius for circrle");
		scanf("%f",&r);//3
		ca=3.14*r*r;
		printf("\nArea of Circle is :%f",ca);
	break;
	
	case 2:
		printf("\nEnter base and height for triangle");
		scanf("%f%f",&b,&h);
		ta=0.5*b*h;
		printf("\nArea of Triangle is :%f",ta);
	break;
	}
	printf("\nDo you want to continue press 1");
	scanf("%d",&ch);//2
	}while(ch==1);
printf("\nThank you..Visit Again...");
getch();
}
