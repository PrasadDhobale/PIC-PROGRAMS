#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define PI 3.14//gloab declaration
int main()
{
	//const float PI=3.14;
	float r,ca;//declaration section
	float b,h,ta;
	float l,br,ra;
	int ch;
	do
	{
		printf("1-Area of Circle\n2-Area of Triangle\n3-Area of Rectabgle\n4-prime\n5-factor\6-facttorial\n7-fibbo\n8-sumofdigit");
		printf("\n------------------------------------");
		printf("\nEnter your choice....");
		scanf("%d",&ch);//3
		switch(ch)
		{
		case 1:
			printf("Enter radius for circle");
			scanf("%f",&r);
			ca=PI*r*r;
			printf("Area of Circle is : %f",ca);	
		break;
		case 2:
			printf("Enter base and height");
			scanf("%f%f",&b,&h);
			ta=0.5*b*h;
			printf("Area of Triangle is %f",ta);
		break;
		case 3:
			//area of rect...	
		break;
		default:
			printf("Invalid choice..");
	}
	printf("\n------------------------------------");
	printf("\nDo you want to continue press 1");
	scanf("%d",&ch);//2
	}while(ch==1);
	printf("\n\n----Thank you..---------");
	return 0;
}