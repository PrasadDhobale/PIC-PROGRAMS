#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX 10
int main() 
{
	int arr[MAX];
	int n,i,ch,flag=0,s,pos,elm;
	do
	{
printf("1-Create\n2-Display\n3-Insert\n4-Delete\n5-Search\n6-Sort");
		printf("Enter your choice..");
		scanf("%d",&ch);//5
	switch(ch)
	{
		case 1://create
			printf("How many nos do you want in Array ");
			scanf("%d",&n);//5
			for(i=0;i<n;i++)
			{
					scanf("%d",&arr[i]);
			}
		break;
		case 2://display
				for(i=0;i<n;i++)
				{
					printf("%5d",arr[i]);
				}
		break;
		case 3:
printf("Enter element and possition to insert new element");
scanf("%d%d",&elm,&pos);//elm=25 pos=3-1=2
			for(i=n-1;i>=pos-1;i--)//1>=2
			{
				arr[i+1]=arr[i];
			}
				////
				arr[pos-1]=elm;
				n++;//n is now 6
				break;
			case 4:
	printf("enter possition to delete value");
		scanf("%d",&pos);//3
		elm=arr[pos-1];//elm=25
		for(i=pos-1;i<n-1;i++){
			arr[i]=arr[i+1];
		}
		n--;//5
				//home work...
		break;
		case 5:
				printf("Enter no to search on Array");
				scanf("%d",&s);//30
				for(i=0;i<n;i++)
				{
					if(arr[i]==s)
					{
						flag=1;
						break;
					}
				}
				if(flag==1)
				{
	printf("\n%d no is found at %d location",s,(i+1));
				}
				else
				{
					printf("Element not found..");
				}
				break;
			default:printf("Invaild Option..");
		}//end of switch
		printf("DO you want to contnue press 1");
		scanf("%d",&ch);
	}while(ch==1);
	return 0;
} 