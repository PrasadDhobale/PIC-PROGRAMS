#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[10];
	int i,sp,nc,cnt=0;
	clrscr();
	printf("\nEnter any string");
	scanf("%s",&str1);
printf("Enter possition and no of char from possition");
	scanf("%d%d",&sp,&nc);

	for(i=sp-1;cnt<nc;i++,cnt++)
	{
	printf("%c",str1[i]);
	}
	getch();
}