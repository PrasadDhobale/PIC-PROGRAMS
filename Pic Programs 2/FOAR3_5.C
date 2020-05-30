#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	clrscr();
	printf("Enter Any 10 Numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0&&a[i]%5==0)
		cnt1++;
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%3==0)
		cnt2++;
	}
	for(i=0;i<10;i++)
	{


		if(a[i]%5==0)
		cnt3++;
	}
	for(i=0;i<10;i++)
	{
		if((a[i]%5!=0)&&(a[i]%3!=0))
		cnt4++;
	}
	printf("\n Numbers Divisible By 3 and 5 Are         : %d.",cnt1);
	printf("\n Numbers Divisible By 3 Are               : %d.",cnt2);
	printf("\n Numbers Divisible By 5 Are      	   : %d.",cnt3);
	printf("\n Numbers Are Not Divisible By 3 and 5 Are : %d.",cnt4);

	getch();
}