//Program On Electric Bill.

#include<stdio.h>
#include<conio.h>
void main()
{
	float w,h,d,n,u,b;
	int a;                //extra

	clrscr();
	printf("Enter Number of Appliances : ");    //n
	scanf("%f",&n);
	printf("Enter Watt of Appliances : ");      //w
	scanf("%f",&w);
	printf("Enter hours : ");                  //h
	scanf("%f",&h);
	printf("Enter Days : ");                   //d
	scanf("%f",&d);

	u=(n*w*h*d)/1000;
	printf("\n\t\t\t Your Total Unit is      : %.3f",u);


	clrscr();
	printf("\n\n\n\n\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~ELECTRIC BILL~~~~~~~~~~~~~~~~~~~~");
	printf("\n\t\t\t Number of Appliances    : %.1f",n);
	printf("\n\t\t\t Watt of Appliances      : %.1f",w);
	printf("\n\t\t\t Use of Appliances (hr)  : %.1f",h);
	printf("\n\t\t\t Use of Appliances (days): %.1f",d);
	printf("\n\t\t\t Your Total Unit is      : %.3f",u);


	if(u<=50)
	   {
		 b=u*3;
		   printf("\n\t\t\t Your Total Bill is      : %.3f Rs.",b);
	   }
	else if((u<=100)&&(u>=50))
	   {
		 b=u*4;
		   printf("\n\t\t\t Your Total Bill is      : %.3f Rs.",b);
	   }
	 else if((u>=101)&&(u<=200))
	   {
		 b=u*5;
		   printf("\n\t\t\t Your Total Bill is      : %.3f Rs.",b);
	   }
	else if((u>=201)&&(u<=300))
	   {
		 b=u*6;
		   printf("\n\t\t\t Your Total Bill is      : %.3f Rs.",b);
	   }
	else
	   {
		 b=u*8;
		    printf("\n\t\t\t Your Total Bill is      : %.3f Rs.",b);
	   }

	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	getch();
}