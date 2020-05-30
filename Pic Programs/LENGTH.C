#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float km,m,ft,inch,cm,mm,yd,mile,mil,namile;
	clrscr();
	printf("1-km to mm,cm,M,inch,foot,yard,mile,mil,NM.\n2-mm to km,cm,m,inch,foot,yard,mile,mil,NM\n3-cm to km,mm,m,inch,foot,yard,mile,mil,NM.\n4-m to km,mm,cm,inch,foot,yard,mile,mil,NM.\n5-inch to km,mm,m,cm,foot,yard,mile,mil,NM\n6-foot to km,mm,m,cm,inch,yard,mile,mil,NM.\n7-yard to km,mm,m,cm,inch,foot,mile,mil,NM\n8-mile to km,mm,m,cm,inch,foot,yard,mil,NM.\n9-NM to km,mm,m,cm,inch,foot,mile,mil,yard.\n10-mil to km,mm,m,cm,inch,foot,mile,NM,yard");
	printf("\n\nEnter Your Choice..: ");
	scanf("%d",&a);
	clrscr();
	if(a==1)
	{
	printf("\nEnter kiometer : ");
	scanf("%f",&km);
	m=km*1000;
	ft=km*3280.84;
	inch=km*39370.1;
	cm=km*100000;
	mm=km*1000000;
	yd=km*1093.61;
	mile=km*0.621;
	namile=km*0.539;
	mil=km*39370078.740;

	printf("\n\n= %f mm",mm);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f NM",namile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==2)
	{
	printf("Enter Milimeter.. : ");
	scanf("%f",&mm);
	 m=mm*0.001;
	ft=mm*0.003280;
	inch=mm*0.03937;
	cm=mm*0.1;
	km=mm*0.000001;
	yd=mm*0.001093;
	mile=mm*0.0000006214;
	namile=mm*0.00000054;
	mil=mm*39.3700;

	printf("\n\n= %f km",km);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f NM",namile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==3)
	{
	printf("Enter Centimeter.. : ");
	scanf("%f",&cm);

	m=cm*0.01;
	ft=cm*0.03280;
	inch=cm*0.3937;
	mm=cm*10;
	km=cm*0.00001;
	yd=cm*0.010936;
	mile=cm*0.0000062137;
	namile=cm*0.0000053996;
	mil=cm*393.700;

	printf("\n\n= %f km",km);
	printf("\n\n= %f mm",mm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f NM",namile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==4)
	{
	printf("Enter Meter.. : ");
	scanf("%f",&m);

	cm=m*100;
	ft=m*3.2808;
	inch=m*39.3700;
	mm=m*1000;
	km=m*0.001;
	yd=m*1.09361;
	mile=m*0.0006213;
	namile=m*0.0005399;
	mil=m*39370.0787;

	printf("\n\n= %f km",km);
	printf("\n\n= %f mm",mm);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f NM",namile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==5)
	{
	printf("Enter Inch .. : ");
	scanf("%f",&inch);

	m=inch*0.0254;
	ft=inch*0.0833333;
	cm=inch*2.4;
	mm=inch*25.4;
	km=inch*0.0000254;
	yd=inch*0.02777778;
	mile=inch*0.0000157828;
	namile=inch*0.0000137149;
	mil=inch*1000;

	printf("\n\n= %f km",km);
	printf("\n\n= %f mm",mm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f NM",namile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==6)
	{
	printf("Enter foot .. : ");
	scanf("%f",&ft);

	m=ft*0.3048;
	inch=ft*12;
	cm=ft*30.48;
	mm=ft*304.8;
	km=ft*0.0003048;
	yd=ft*0.33333333;
	mile=ft*0.0001893;
	namile=ft*0.0001645788;
	mil=ft*12000;

	printf("\n\n= %f km",km);
	printf("\n\n= %f mm",mm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f NM",namile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==7)
	{
	printf("Enter yard .. : ");
	scanf("%f",&yd);

	m=yd*0.9144;
	inch=yd*36;
	cm=yd*91.44;
	mm=yd*914.4;
	km=yd*0.0009144;
	ft=yd*3;
	mile=yd*0.000568181;
	namile=yd*0.000493736;
	mil=yd*3600;

	printf("\n\n= %f km",km);
	printf("\n\n= %f mm",mm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f NM",namile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==8)
	{
	printf("Enter mile .. : ");
	scanf("%f",&mile);

	m=mile*1609.344;
	inch=mile*63360;
	cm=mile*160934.4;
	mm=mile*1609344;
	km=mile*1.609344;
	yd=mile*1760;
	ft=mile*5280;
	namile=mile*0.8689762419;
	mil=mile*63360000;

	printf("\n\n= %f km",km);
	printf("\n\n= %f mm",mm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f NM",namile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==9)
	{
	printf("Enter namile .. : ");
	scanf("%f",&namile);

	m=namile*1852;
	inch=namile*72913.3858;
	cm=namile*185200;
	mm=namile*1852000;
	km=namile*1.852;
	yd=namile*2025.3718;
	ft=namile*6076.115485;
	mile=namile*1.15077;
	mil=namile*72913385.826771;

	printf("\n\n= %f km",km);
	printf("\n\n= %f mm",mm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f mil",mil);
	}
	else if(a==10)
	{
	printf("Enter mil .. : ");
	scanf("%f",&mil);

	m=mil*0.0000254;
	inch=mil*0.001;
	cm=mil*0.00254;
	mm=mil*0.0254;
	km=mil*0.0000000254;
	yd=mil*0.0000277778;
	ft=mil*0.000083333;
	mile=mil*1.57828283;
	namile=mil*1.37149028;

	printf("\n\n= %f km",km);
	printf("\n\n= %f mm",mm);
	printf("\n\n= %f M",m);
	printf("\n\n= %f cm",cm);
	printf("\n\n= %f inch",inch);
	printf("\n\n= %f yd",yd);
	printf("\n\n= %f ft",ft);
	printf("\n\n= %f mile",mile);
	printf("\n\n= %f namile",namile);
      }
      else
      {
      printf("Invalid Choice.");
      }

	getch();
}