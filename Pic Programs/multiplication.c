#include<stdio.h>
#include<conio.h>
void main()
{
	int mat1[2][3],mat2[3][4],mat3[2][4];
	int i,j,k;
	clrscr();
	for(i=0;i<2;i++)
	{
		for(k=0;k<3;k++)
		{
	mat3[i][k]=0;
		}
	}
	printf("\nEnter elements for matrix1");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
	scanf("%d",&mat1[i][j]);
		}
	}
	printf("\nEnter elements for matrix2");
	for(j=0;j<3;j++)
	{
		for(k=0;k<4;k++)
		{
	scanf("%d",&mat2[j][k]);
		}	
	}
getch();
}