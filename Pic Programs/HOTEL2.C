#include<stdio.h>
#include<conio.h>
void main()
{
	char menu[4];


	int i,a,x,p,z,c,d,w,y,b;
	int cr=0,sp=0,cho=0,td;
	int dsa=0,k=0,t=0,ts;
	int to,tb,v;

	int pnr=0,m=0,ve=0,tv;
	int ch=0,l=0,e=0,tn;

	MAIN:
	clrscr();

	printf("\n\t----------------------HOTEL PANCHATARA---------------------");
	printf("\n\n\t    ---------------------MENU CARD---------------------");
	printf("\n\n\n\t\t  ----------------------------------------");
	printf("\n\t\t\tOrd No.\t\tMenu");
	printf("\n\t\t  ----------------------------------------");
	printf("\n\t\t\t1\t\tStarter");
	printf("\n\t\t\t2\t\tVeg");
	printf("\n\t\t\t3\t\tNon-Veg");
	printf("\n\t\t\t4\t\tDesert");
	printf("\n\t\t     ----------------------------------");

	printf("\n\n\t\t\tEnter Your Choice.. : ");
	scanf("%d",&x);



	//printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

if(x==1)
 {

	menu:
	clrscr();
	printf("\n---------------Starter Menu---------------");
	printf("\n\n------------------------------------------");
	printf("\n\tOrd No.\tMenu\t\tPrice");
	printf("\n------------------------------------------");
	printf("\n\t1\tDosa\t\t50");
	printf("\n\t2\tKebabs\t\t100");
	printf("\n\t3\ttea\t\t70");
	printf("\n------------------------------------------");
	printf("\n\n\tEnter Your Choice.. : ");
	scanf("%d",&a);


	if(a==1)
	{
		dsa++;
	}
	else if(a==2)
	{
		k++;
	}
	else if(a==3)
	{
		t++;
	}
	else
	{
		printf("\t\nInvaid Option");
		printf("\n\nSorry Here Only Three Items Are Available...");
		printf("\n\nPress 1 For More....OR\n\nPress 2 For Exit....OR\n\nPress 3 For Main Menu :");
		scanf("%d",&x);
		if(x==1)
		{
			goto menu;
		}
		else if(x==2)
		{
			goto label;

		}
		else if (x==3)
		{
			goto MAIN;
		}
		else
		{
			printf("If You Want To Continue..Press 1 : ");
			scanf("%d",&v);
			if(v==1)
			{
				goto MAIN;
			}
			else
			{
				goto label;
			}
		 }

	}
 //	ts=dsa+k+t;

	printf("\t\n\nPress 1 For More..OR\n\nPress 2 For Bill OR\n\nPress 3 For Main Menu   : ");
	scanf("%d",&x);
	if(x==1)
	{
		goto menu;
	}
	else if(x==2)
	{
		goto Bill;
	}
	else if (x==3)
	{
		goto MAIN;
	}
	else
	{
	 printf("If You Want To Continue..Press 1 : ");
	 scanf("%d",&v);
	 if(v==1)
	 {
		goto MAIN;
	 }
	 else
	 {
		goto label;
	 }
	}
 }


       //	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
else if(x==2)
 {


	menu2:
	clrscr();
	printf("\n---------------------VEG MENU------------------------");
	printf("\n\n-----------------------------------------------------");
	printf("\n\tOrd No.\tMenu\t\tPrice");
	printf("\n-----------------------------------------------------");

	printf("\n\t1\tPaneer\t\t100");
	printf("\n\t2\tMix Veg\t\t150");
	printf("\n\t3\tCheez\t\t200");
	printf("\n-----------------------------------------------------");

	printf("\n\n\tEnter Your Choice.. :");
	scanf("%d",&b);

	if(b==1)
	{
		pnr++;
	}
	else if(b==2)
	{
		m++;
	}
	else if(b==3)
	{
		ve++;
	}

	else
	{
		printf("\t\nInvaid Option");
		printf("\n\nSorry Here Only Three Items Are Available...");
		printf("\n\nPress 1 For More.....OR\n\nPress 2 For Exit....OR\n\nPress 3 For Main Menu :");
		scanf("%d",&y);
		if(y==1)
		{
			goto menu2;
		}
		else if(y==2)
		{
			goto label;

		}
		else if (y==3)
		{
			goto MAIN;
		}
		else
		{
			printf("If You Want To Continue..Press 1 : ");
			scanf("%d",&v);
			if(v==1)
			{
				goto MAIN;
			}
			else
			{
				goto label;
			}
		}

	}
   //    tv=pnr+m+v;

	printf("\t\n\nPress 1 For More..OR\n\nPress 2 For Bill OR\n\nPress 3 For Main Menu : ");
	scanf("%d",&y);
	if(y==1)
	{
		goto menu2;
	}
	else if(y==2)
	{
		goto Bill;
	}
	else if(y==3)
	{
		goto MAIN;
	}
	else
	{
	 printf("If You Want To Continue..Press 1 : ");
	 scanf("%d",&v);
	 if(v==1)
	 {
		goto MAIN;
	 }
	 else
	 {
		goto label;
	 }
	}
 }
	//printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


else if(x==3)
 {

	menu3:
	clrscr();
	printf("\n-----------------Non-veg Menu-----------------");
	printf("\n\n----------------------------------------------");
	printf("\n\tOrd No.\tMenu\t\tPrice");
	printf("\n----------------------------------------------");
	printf("\n\t1\tChiken\t\t200");
	printf("\n\t2\tEggs\t\t50");
	printf("\n\t3\tLegpice\t\t250");
	printf("\n----------------------------------------------");
	printf("\n\tEnter Your Choice.. : ");
	scanf("%d",&c);



	if(c==1)
	{
		ch++;
	}
	else if(c==2)
	{
		e++;
	}
	else if(c==3)
	{
		l++;
	}

	else
	{
		printf("\t\nInvaid Option");
		printf("\n\nSorry Here Only Three Items Are Available...");
		printf("\n\nPress 1 For More....OR\n\nPress 2 For Exit.... OR\n\nPress 3 For Main Menu.. : ");
		scanf("%d",&z);
		if(z==1)
		{
			goto menu3;
		}
		else if(z==2)
		{
			goto label;

		}
		else if(z==3)
		{
			goto MAIN;
		}
		else
		{
			printf("If You Want To Continue..Press 1 : ");
			scanf("%d",&v);
			if(v==1)
			{
				goto MAIN;
			}
			else
			{
				goto label;
			}
		}

	}
     //  tn=ch+e+l;

	printf("\t\n\nPress 1 For More..OR\n\nPress 2 For Bill OR\n\nPress 3 For Main Menu : ");
	scanf("%d",&z);
	if(z==1)
	{
		goto menu3;
	}
	else if(z==2)
	{
		goto Bill;
	}
	else if(z==3)
	{
		goto MAIN;
	}
	else
	{
	 printf("If You Want To Continue..Press 1 : ");
	 scanf("%d",&v);
	 if(v==1)
	 {
		goto MAIN;
	 }
	 else
	 {
		goto label;
	 }
	}


 }
	//printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
else if(x==4)
 {

	menu4:
	clrscr();
	printf("\n----------------Desert Menu----------------");
	printf("\n-------------------------------------------");
	printf("\n\tOrd No.\tMenu\t\tPrice");

	printf("\n-------------------------------------------");
	printf("\n\t1\tCream\t\t50");
	printf("\n\t2\tSprite\t\t100");
	printf("\n\t3\tchoco\t\t80");
	printf("\n-------------------------------------------");

	printf("\n\n\tEnter Your Choice.. : ");
	scanf("%d",&d);

	if(d==1)
	{
	       cr++;
	}
	else if(d==2)
	{
	       sp++;
	}
	else if(d==3)
	{
	       cho++;
	}

	else
	{
		printf("\t\nInvaid Option");
		printf("\n\nSorry Here Only Three Items Are Available...");
		printf("\n\nPress 1 For More....OR\n\nPress 2 For Exit...OR\n\nPress 3 For Main Menu.. : ");
		scanf("%d",&w);
		if(w==1)
		{
			goto menu4;
		}
		else if(w==2)
		{
			goto label;

		}
		else if(w==3)
		{
			goto MAIN;
		}
		else
		{
			printf("If You Want To Continue..Press 1 : ");
			scanf("%d",&v);
			if(v==1)
			{
				goto MAIN;
			}
			else
			{
				goto label;
			}
		}

	}
       //	td=cr+sp+cho;

	printf("\t\n\nPress 1 For More..OR\n\nPress 2 For Bill OR\n\nPress 3 For Main Menu : ");
	scanf("%d",&w);
	if(w==1)
	{
		goto menu4;
	}
	else if(w==2)
	{
		goto Bill;
	}
	else if (w==3)
	{
		goto MAIN;
	}
	else
	{
	 printf("If You Want To Continue..Press 1 : ");
	 scanf("%d",&v);
	 if(v==1)
	 {
		goto MAIN;
	 }
	 else
	 {
		goto label;
	 }
	}
 }
	//printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
else
 {

			printf("\n\t\tInvalid Option..\n\n\t\tSorry...Here Only Four Menu Are Available...");
			printf("\n\n\t\tIf You Want To Continue..Press 1");
			scanf("%d",&p);
			if(p==1)
			{
				goto MAIN;
			}
			else
			{
				goto label;
			}

 }


	Bill:
	clrscr();
	printf("\n\t  ---------------------HOTEL PANCHATARA---------------------");
	printf("\n\n\t  -----------------------BILL RECEIPT-----------------------");
	printf("\n\t\t\tYour Total Orders Are : %d",dsa+k+t+pnr+m+ve+ch+e+l+cr+sp+cho);
	printf("\n\t  -----------------------------------------------------------");
	printf("\n\t\t\tSr.No\tMenu\t\tPrice\tQuantity");
	printf("\n\t  -----------------------------------------------------------");
	printf("\n\t\t\t1\tDosa\t\t50\t  %d",dsa);
	printf("\n\t\t\t2\tKebabs\t\t100\t  %d",k);
	printf("\n\t\t\t3\tTea\t\t70\t  %d",t);
	printf("\n\t\t\t4\tPaneer\t\t100\t  %d",pnr);
	printf("\n\t\t\t5\tMix Veg\t\t150\t  %d",m);
	printf("\n\t\t\t6\tCheeze\t\t200\t  %d",ve);
	printf("\n\t\t\t7\tChiken\t\t200\t  %d",ch);
	printf("\n\t\t\t8\tEggs\t\t50\t\  %d",e);
	printf("\n\t\t\t9\tLegpice\t\t250\t  %d",l);
	printf("\n\t\t\t10\tCream\t\t50\t  %d",cr);
	printf("\n\t\t\t11\tSprite\t\t100\t  %d",sp);
	printf("\n\t\t\t12\tChoco\t\t80\t  %d",cho);
	tb=50*dsa+100*k+70*t+pnr*100+m*150+200*ve+200*ch+50*e+250*l+50*cr+100*sp+80*cho;
	printf("\n\n\t\t\tYour Total Bill Is : %d\n",tb);
	printf("\n\t  -------------------THANKING YOU VISIT AGAIN------------------");

	label:
	getch();
}