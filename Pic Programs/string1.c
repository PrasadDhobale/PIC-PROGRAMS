#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	int l;
	clrscr();
	printf("\nENter any two string");
	scanf("%s%s",str1,str2);
	//string len..
	l=strlen(str1);//abcd  4
	printf("\nLegth of string is : %d",l);
	//string copy...
	strcpy(str1,str2);//copy str2 into str1
printf("\nAfter string copy first string is : %s",str1);
	

	
getch();
}