//*8.4.1)  Write a Program in C to Accept 5 Numbers from the User and Sort Using Bubble Sort

#include<stdio.h>
void main()
{
	int swap,i,j,num[10],k;
	printf("Enter 5 numbers\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&num[i]); //accepting 5 numbers
	}
	printf("\n\n Original Nos. \t\t\t");
	for(k=0;k<=4;k++)
	{
		printf("%d\t",num[k]); //printing the numbers
	}
	printf("\n\n");
	for(i=1;i<=4;i++)//i=2 means pass
	{
		printf("Round %d \n",i);//2
		for(j=0;j<5-i;j++)//0<3
		{
			printf("Comapring (%d) and (%d)",j+1,j+2);
			if(num[j]>num[j+1])//5>3
			{
				swap=num[j];
				num[j]=num[j+1]; //swapping if is greater
				num[j+1]=swap;
			}
			printf("\t\t");
			for(k=0;k<=4;k++)
			{
				printf("%d\t",num[k]); //printing the numbers
			}
			printf("\n");
			getch();
		}//j
		printf("\n");
	}//i
	printf("\n\nNumbers after using Bubble Sort Method\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",num[i]);
	}
}


/*
Output for the Program Given in 8.4.1


Enter 5 Numbers
92
90
78
54
2


Original Nos.				92	90	78	54	2

Round 1
Comparing (1) and (2)		90	92	78	54	2
Comparing (2) and (3)		90	78	92	54	2
Comparing (3) and (4)		90	78	54	92	2
Comparing (4) and (5)		90	78	54	2	92

Round 2
Comparing (1) and (2) 		78	90	54	2	92
Comparing (2) and (3) 		78	54	90	2	92
Comparing (3) and (4)		78	54	2	90	92

Round 3
Comparing (1) and (2) 		54	78	2	90	92
Comparing (2) and (3)		54	2	78	90	92

Round 4
Comparing (1) and (2)		2	54	78	90	92


Numbers after using Bubble Sort Method
2
54
78
90
92

*/