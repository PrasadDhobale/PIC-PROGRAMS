#include<stdio.h>
#include<conio.h>
struct node
{
  int data;
  struct node *addr;
}*start,*temp,*q;

void create(int);
void display();

void main()
{
  int n,ch;
  start=NULL;
  do
  {
    printf("\nenter num to insert in linklist");
    scanf("%d",&n);
    create(n);
    display();
    printf("\nIf want to continue pess 1");
    scanf("%d",&ch);
  }while(ch==1);
}
void create(int n)
{
   temp=malloc(sizeof(struct node));
   temp->data=n;
   temp->addr=0;
   if(start==0)
   {
     start=temp;
   }
   else
   {
     q=start;
     while(q->addr!=NULL)
     {
	q=q->addr;
     }
     q->addr=temp;
 }
}

void display()
{
  if(start==NULL)
  {
    printf("\nlinked list is empty");
  }
  else
  {
    q=start;
    while(q!=NULL)
    {
      printf(" | %d | %u |->",q->data,q->addr);
      q=q->addr;
    }
  }
}
