#include<stdio.h>
#include<conio.h>
void main()
{

	int MAT1[3][3]={{10,20,30},
			{40,50,60},
			{70,80,90}
			};
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",MAT[i][j]);
		}
		pintf("\n");
	}
	getch();
}