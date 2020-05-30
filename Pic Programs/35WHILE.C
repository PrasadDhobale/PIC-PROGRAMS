#include<stdio.h>
#include<conio.h>
int main()
{
	int n,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	int i;
	//clrscr();
	printf("Enter any number");
	scanf("%d",&n);//10
	i=1;
	while(i<=n)
	{
		if((i%3==0)&&(i%5==0))
		{
			cnt1++;
		}
		else if(i%3==0)
		{
			cnt2++;//2
		}
		else if(i%5==0)
		{
			cnt3++; //1
		}
		else
		{
			cnt4++; //2
		}
		i++;//3
	}

	printf("\nTotal no div by 3 and 5 are  	   : %d",cnt1);
	printf("\nTotal no div by 3   	       	   : %d",cnt2);
	printf("\nTotal no div 5 are  	       	   : %d",cnt3);
	printf("\nTotal no not div by 3 and 5 are  : %d",cnt4);
	return 0;



	//getch();
}

