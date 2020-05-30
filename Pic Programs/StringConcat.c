#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,cnt;
	char str1[10],str2[10];
	clrscr();
	printf("Enter any two string");
	scanf("%s%s",str1,str2);//raj ram

	for(i=0;str1[i]!='\0';i++);//i=3

	for(j=0;str2[j]!='\0';j++,i++)
	{
		str1[i]=str2[j];	
	}
	str1[i]='\0';
	printf("String 1 is : %s",str1);
	getch();
}