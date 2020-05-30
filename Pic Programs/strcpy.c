#include<strio.h>
#include<conio.h>
void main()
{
	char str1[10],str2[10];
	int i,j,cnt1,ctr2;
	clrscr();
	printf("\nEnter first string");
	scanf("%s",str1);//abc
	printf("\nEnter second string");
	scanf("%s",str2);//xyz
	for(i=0;str1[i]!='\0';i++)
	{
		cnt1++;
	}
	//ctr1 =3;
	for(j=0;i=0;str2[j]!='\0';j++,i++)
	{
		str1[i]=str2[j];	
	}
	str1[i]='\0';
	printf("After copy string1 is : %s",str1);//xyz
	printf("After copy string2 is : %s",str1);//xyz

	getch();
}