#include<stdio.h>
#include<conio.h>
#define max 20
int [][]accept(int,int);
void main()
{
	int mat1[max][max],mat2[max][max],mat3[max][max];
	int r1,c1,r2,c2;
	int flag=0;
	clrscr();
	printf("Enter how many no of rows and col do you want matrix1");
	scanf("%d%d",&r1,&c1);
	printf("Enter how many no of rows and col do you want matrix2");
	scanf("%d%d",&r2,&c2);
	if((r1==r2)&&(c1==c2))
	{
		mat1=accept(r1,c1);
		mat2=accept(r2,c2);
	}
	else
	{
		printf("Add not possible..");
	}

}
int [][]accept(int r,int c)
{
	int mat[max][max],i,j;
		printf("Enter elements in matrix ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&mat[i][j]);
			}
		}

		return mat;

}
