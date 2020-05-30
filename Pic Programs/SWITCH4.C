#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float r,b,h,ca,ta;
	char ch;
	clrscr();
	printf("\nc|C -Area of Circle");
	printf("\nt|T -Area of Triangle");
	printf("\nr|R -Area of Rect");
	printf("\nEnter Your Choice..");
	scanf("%c",&ch);

	switch(ch)
	{
	case 'c':
	case 'C':
		printf("\nEnter radius for circle");
		scanf("%f",&r);
		ca=PI*r*r;
		printf("\nArea of Circle is : %f",ca);
	break;
	case 't':
	case 'T':
		printf("\nEnter base and height");
		scanf("%f%f",&b,&h);
		ta=0.5*b*h;
		printf("\nArea of Triangle is : %f",ta);
	break;
	case 'r':
	case 'R':
		//Area of Rectangle...
	break;
	}
getch();
}