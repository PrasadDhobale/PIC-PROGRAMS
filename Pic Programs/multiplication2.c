#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[2][3],m2[3][4],m3[2][4];
	int i,j,k;
	clrscr();
	for(i=0;i<2;i++)
	{
		for(k=0;k<4;k++)
		{
			m3[i][k]=0;
		}
	}
	printf("\nEnter elements for matrix1");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\nEnter elements for matrix2");
	for(j=0;j<3;j++)
	{
		for(k=0;k<4;k++)
		{
			scanf("%d",&m2[j][k]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(k=0;k<4;k++)
		{
			for(j=0;j<3;j++)
			{
		m3[i][k]=m3[i][k]+(m1[i][j]*m2[j][k]);
			}
		}
	}
	printf("\n----------MULTIPLICATION-----------------");
	for(i=0;i<2;i++)
	{
		for(k=0;k<4;k++)
		{
		printf("%5d",m3[i][k]);
		}
	printf("\n");
	}
getch();
}