#include<stdio.h>
#include<conio.h>
void main()
{
	char vmenu[3];
	int vmenuprice[3]={50,40,30};
	int x,i,sum,tax,ordno;
	menu:
	clrscr();

	strcpy(vmenu[0],"Dosa");
	strcpy(vmenu[1],"Idali");
	strcpy(vmenu[2],"Poha");
	printf("\t\n------------------------------------------------\n");
	printf("\t\t\nOrderNo\tVegMenu\t\tPrice");
	printf("\t\n------------------------------------------------\n");
	for(i=0;i<3;i++)
	{
		printf("\t\n%d\t%s\t\t%d /-",i+1,vmenu[i],vmenuprice[i]);
	}
	printf("\t\n------------------------------------------------\n");
	getch();
}