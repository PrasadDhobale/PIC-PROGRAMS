#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	float r,b,h,ca,ta;
	clrscr();
	printf("\n1-Area of Circle");
	printf("\n2-Area of triangle");
	printf("\n3-Area of Rect");

	printf("\nEnter your choice..");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:printf("\nEnter radius for circle");
			scanf("%f",&r);
			ca=3.14*r*r;
			printf("\nArea of Circle is : %f",ca);
		break;

		case 2:printf("\nEnter base and height");
			scanf("%f%f",&b,&h);
			ta=0.5*b*h;
			printf("\nArea of Triangle is : %f",ta);
		break;
	}
	getch();
}