#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[10],str2[10];
	int i,j,cnt1=0,cnt2=0;,k;
	clrscr();
	printf("Enter first strings");
	scanf("%s",str1);
	printf("Enter second strings");
	scanf("%s",str2);//abc
	for(i=0;str1[i]!='\0';i++)
	{
		cnt1++;
	}
	//ctr1=3
	for(j=0,i=ctr1;str2[j]!='\0';i++,j++)//xyz
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	printf("\nConcatination of str1 and str2 is : %s",str1);//abcxyz
getch();	
}