#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,cnt=0;
	char str1[5];
	clrscr();
	printf("\nEnter Your String : ");
	scanf("%s",&str1);
	for(i=0;str1[i]!='\0';i++)
	{
		cnt++;
	}
       //	printf("\nThe Length Of Entered String Is : %d",cnt);
       /*
	printf("\nThe Reverse Of Entered String Is :\n");
	for(j=cnt-1;j>=0;j--)
	{
		printf("%c",str1[j]);
	}
	*/
	getch();
}

