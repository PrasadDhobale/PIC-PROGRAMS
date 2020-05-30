#include<stdio.h>
#include<conio.h>
void main()
{
 int a[12],b;
 float fb,ab,per=0;
 clrscr();
 printf("Enter Your Account Number : ");
 scanf("%s",&a);
 printf("\nEnter Your Monthly Balance : ");
 scanf("%s",&b);
 ab=b*12;
 printf("\nYour Annual Balance is : %.2f \n",ab);
 per=ab*0.08;
 printf("\nInterest on Your Annual Balance : %.2f \n",per);
 fb=ab-per;
 printf("\nYour Final Balance : %.2f\n",fb);
 getch();

}