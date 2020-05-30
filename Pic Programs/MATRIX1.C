#include<stdio.h>
#include<conio.h>
#define max 10
void main()
{
	int mat1[max][max],mat2[max][max],mat3[max][max];
	int i,j,r1,c1,r2,c2;
	clrscr();
	printf("\nHow many rows and col do you want for matrix1");
	scanf("%d%d",&r1,&c1);
	printf("\nHow many rows and col do you want for matrix2");
	scanf("%d%d",&r2,&c2);
	if((r1==r2)&&(c1==c2))
	{
	printf("\nEnter elements in matrix");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&mat1[i][j]);
		}
	}
	printf("\nEnter elements in matrix2");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		scanf("%d",&mat2[i][j]);
		}
	}
	//Addition of two matrix...
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
	mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
printf("\n------------MATRIX ADDITION ----------------");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		printf("%5d",mat3[i][j]);
		}
	printf("\n");
	}
	}
	else
	{
	printf("\nAdd not possible...");
	}
getch();	
}