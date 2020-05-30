#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
	int m1[max][max],m2[max][max],m3[max][max];
	int i,j,r1,c1,r2,c2,x;
	MENU:
	clrscr();
	printf("How Many Rows And Columns You Want For Matrix 1 : ");
	scanf("%d%d",&r1,&c1);

	printf("How Many Rows And Columns You Want For MAtrix 2 : ");
	scanf("%d%d",&r2,&c2);

	if((r1==r2)&&(c1==c2))
	{
	printf("Enter Element For Matrix 1 :");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter Elements For Matrix 2 :");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",m2[i][j]);
		}
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("\n~~~~~~~~~~~Matrix Addition~~~~~~~~~~~~~\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%3d",m3[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
	printf("Not Possible...");
	printf("\n\nIf You Want Tod Continue... Press 1 : ");
	scanf("%d",&x);
	if(x==1)
	{
		goto MENU;
	}
	else
	{
		goto label;
	}
	}


	label:
	getch();
}