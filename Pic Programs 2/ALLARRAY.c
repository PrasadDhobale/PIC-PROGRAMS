#include<stdio.h>
#include<conio.h>
#define max 50
void main()
{
  int a[max],i,n,pos,b,c,ch,k,x,ub,lb,j,mid,num,count,temp;
 do
  {
   clrscr();
	  printf("\n\t\t1-\tCREATE ARRAY ELEMENTS");
	  printf("\n\t\t2-\tDISPLAY ARRAY ELEMENTS");
	  printf("\n\t\t3-\tINSERT ARRAY ELEMENTS");
	  printf("\n\t\t4-\tDELETE ARRAY ELEMENTS");
	  printf("\n\t\t5-\tLINEAR SEARCHING OF ARRAY ELEMENT");
	  printf("\n\t\t6-\tBINARY SEARCHING OF ARRAY ELEMENTS");
	  printf("\nEnter your choice........");
	  scanf("%d",&ch);
   switch(ch)
   {
		   case 1:
			  printf("Enter how many no do you want in array");
			  scanf("%d",&n);
			  for (i=0;i<n;i++)
			  {
				  scanf("%d",&a[i]);
			  }
		   break;
		   case 2:
			  printf("\n Elements in the array are :\n");
			  for (i=0;i<n;i++)
			  {
				  printf("%d",a[i]);
			  }
		   break;
		   case 3:
			  printf("\nEnter the no to be insert in array :");
			  scanf("%d",&b);
			  printf("\nEnter position to intert no :");
			  scanf("%d",&pos);
				  pos=pos-1;
			  for (i=n-1;i>=pos;i--)
			  {
				  printf("\nValueof i:%d");
				  a[i+1]=a[i];
			  }
				  a[pos]=b;
			  n++;
			  printf("\nElements in array after insertion are :");
			  for (i=0;i<n;i++)
			  {
				  printf("%d",a[i]);
			  }
		   break;
		   case 4:
			  printf("\nEnter position to delete no :");
			  scanf("%d",&pos);
				  pos=pos-1;
				  x=a[pos];
			  for (i=pos;i<n-1;i++)
			  {
				  printf("\nValueof i:%d");
				  a[i]=a[i+1];
			  }
			  n--;
			  printf("\n%d no is deleted",x);
			  printf("\nElements in array after deletion are :");
			  for (i=0;i<n;i++)
			  {
				  printf("%d",a[i]);
			  }
		   break;
		   case 5:
			  for(j=0;j<n;j++)
			  {
				 for(i+0;i<n;i++)
				 {
					if(a[i]>a[i+1])
					  {
					   temp=a[i];
					   a[i]=a[i+1];
					   a[i+1]=temp;
					  }
				 }
			  }
			  printf("\nAssending order is :");
			  for (i=0;i<n;i++)
			  {
				  printf("%d",a[i]);
			  }
			  printf("\nEnter the no to be search using binary seach");
			  scanf("%d",&num);
					lb=0;
					ub=n-1;
					mid=(lb+ub)/2;
			   while(lb<ub)
			   {
					if(a[mid]==num)
					{
						 printf("Number is at %d position",mid+1);
						 break;
					}
					else if(a[mid]<num)
						 {
							  lb=mid+1;
							  mid=(ub+lb)/2;
						 }
						 else if(a[mid]>num)
							  {
								  ub=mid-1;
								  mid=(ub+lb)/2;
							   }
			   }
		   break;
		   case 6:
				  count=0;
			  printf("\nEnter the no to be search using linear array");
			  scanf("%d",&num);
			  for(i=0;i<n;i++);
			  {
				if(a[i]==num)
				  {
					 printf("\n%d found at %d position",n,(i+1));
					 count++;
				  }
			  }
			  if(count==0)
			  {
					 printf("\n search unsuccesfull!!! %d is not presrent in array",num);
			  }
			  else
			  {
					 printf("\n search succesfull!!! %d is presrent %d time in array",num,count);
			  }
		   break;
		   }
	  printf("\nDo you want to continue..........press1");
	  scanf("%d",&k);
   }while(k==1);
 printf("\n\t********......THANK YOU ........********.........VISIT AGAIN");
 getch();
}
