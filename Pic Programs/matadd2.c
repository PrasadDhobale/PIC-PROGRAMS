#include<stdio.h.
#include<conio.h>
void main()
{
	int mat1[3][4],mat2[3][4],mat3[3][4];
	int i,j;
	clrscr();
	printf("Enter elements for matrix 1");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}

	printf("Enter elements for matrix 2");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	//Addition logic...
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}	
	printf("\n-----------MATRIX ADDITION-----------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%5d",mat3[i][j]);
		}
	printf("\n");
	}
		

getch();	
}











