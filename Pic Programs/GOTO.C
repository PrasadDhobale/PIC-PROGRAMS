#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float ac,ar,at,ra,br,l,b,h;
	clrscr();
	menu:
	printf("\n\n\n1-Area of the Circle.\n2-Area of Rectangle.\n3-Area of Triangle.");
	printf("\n---------------------------------------");
	printf("\n\nEnter Your Choice.......");
	scanf("%d",&a);
	if(a==1)
	{
	  printf("\n\tEnter the Radius : ");
	  scanf("%f",&ra);
	  ac=3.14*ra*ra;
	  printf("\n\tArea of Circle : %.2f",ac);
	  printf("\n-------------------------------------");
	}
	else if(a==2)
	 {
	  printf("\n\n\tEnter Length of Rectangle : ");
	  scanf("%f",&l);
	  printf("\n\tEnter Breadth of Rectangle : ");
	  scanf("%f",&br);
	  ar=l*br;
	  printf("\n\tArea of Rectangle : %.2f",ar);
	  printf("\n-------------------------------------");
	}
	else if (a==3
	)
	  {
		printf("Enter The Base of triangle : ");
		scanf("%f",&b);
		printf("Enter The Height of Triangle : ");
		scanf("%f",&h);
		 at=0.5*b*h;
		printf("\n\tArea of Triangle : %.2f",at);
		printf("\n------------------------------------");
	   }
	  else
	  printf("Invalid Choice..");
	  printf("\nIf You want to Continue.. Press 1.");
	  scanf("%d",&a);
	  if(a==1)
	  goto menu;
	  else
	  printf("\nIf You Want To Exit....Press Enter..");
	getch();
}