#include<stdio.h>
#inclue<conio.h>
void main()
{
	float b,h,area;
	clrscr();
	printf("\nENter base and height");
	scanf("%f%f",&b,&h);
	area=0.5*b*h;
	printf("\nArea of Triangle is : %f",area);
	getch();

}