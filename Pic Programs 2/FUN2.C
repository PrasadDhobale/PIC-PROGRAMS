#include<stdio.h>
#include<conio.h>
void acircle();
void arect();
void atri();
void asqr();
void arhmbs();
void acbe();
int main()
{

	int ch;
	menu:
	clrscr();
	printf("\n1 - Area Of Circle.\n2 - Area Of Rectangle.\n3 - Area Of Triangle.\n4 - Area Of Square.\n5 - Are Of Rhombus.\n6 - Area Of Cube.");
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		acircle();
		break;

		case 2:
		arect();
		break;

		case 3:
		atri();
		break;

		case 4:
		asqr();
		break;

		case 5:
		arhmbs();
		break;

		case 6:
		acbe();
		break;

		default:
		printf("\nInvalid Option...");

		printf("\n\n\n\tIf You Want To Continue.. Press 1 : ");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto menu;
		}
		else
		{

			printf("\n\n\n\tIf You Want To Exit.. Press Enter : ");
			goto label;
		}
	}

		printf("\n\n\n\tIf You Want To Continue.. Press 1 : ");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto menu;
		}
		else
		{
			printf("\n\n\n\tIf You Want To Exit.. Press Enter : ");
			goto label;
		}


	label:
	getch();
	return 0;
}

       void acircle()
       {
		float ac,ra;
		printf("\n\t------------------------------------");
		printf("\n\n\tEnter the Radius : ");
		scanf("%f",&ra);
		ac=3.14*ra*ra;
		printf("\n\tArea of Circle : %.2f",ac);
		printf("\n\t------------------------------------");
       }

       void arect()
       {
		float ar,l,br;
		printf("\n\t------------------------------------");
		printf("\n\n\tEnter Length of Rectangle : ");
		scanf("%f",&l);
		printf("\n\tEnter Breadth of Rectangle : ");
		scanf("%f",&br);
		ar=l*br;
		printf("\n\tArea of Rectangle : %.2f",ar);
		printf("\n\t------------------------------------");
       }

       void atri()
       {
		float b,h,at;
		printf("\n\t------------------------------------");
		printf("\n\n\tEnter The Base of triangle : ");
		scanf("%f",&b);
		printf("\n\tEnter The Height of Triangle : ");
		scanf("%f",&h);
		 at=0.5*b*h;
		printf("\n\tArea of Triangle : %.2f",at);
		printf("\n\t------------------------------------");
       }

       void asqr()
       {
		float s,as;
		printf("\n\t------------------------------------");
		printf("\n\n\tEnter Side of Square : ");
		scanf("%f",&s);
		as=s*s;
		printf("\n\tArea Of Square is %.2f",as);
		printf("\n\t------------------------------------");
       }
       void arhmbs()
       {
		float d1,d2,ad;
		printf("\n\t------------------------------------");
		printf("\n\n\tEnter Diagonals Of Rhombus : ");
		scanf("%f%f",&d1,&d2);
		ad=0.5*d1*d2;
		printf("\n\tArea Of Rhombus Is : %.2f",ad);
		printf("\n\t------------------------------------");
       }

       void acbe()
       {
		float s,ac;
		printf("\n\t------------------------------------");
		printf("\n\n\tEnter Side of Cube : ");
		scanf("%f",&s);
		ac=6*s*s;
		printf("\n\tAre Of Cube Is : %.2f",ac);
		printf("\n\t------------------------------------");
       }