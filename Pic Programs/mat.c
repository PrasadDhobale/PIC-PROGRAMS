#include<stdio.h>
#include<conio.h>
void main()
{
	int mat1[3][3],mat2[3][3],mat3[3][3];
	int i,j;
	clrscr();
	printf("\nEnter elements in Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&mat1[i][j]);
		}
	}
	printf("\nEnter elements in Matrix2");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&mat2[i][j]);
		}
	}
	//Addition...
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}


	printf("\n----------MATRIX ADDITION -------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	printf("%5d",mat3[i][j]);	
		}
	printf("\n");
	}
getch();
}