#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	clrscr();
	for(ch=65;ch<=90;ch++)
	{
printf("%5c%5c",ch,ch+32);
	}
getch();
}