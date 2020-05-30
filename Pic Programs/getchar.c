#include <stdio.h>
#include <stdlib.h>

/ run this program using the console pauser or add your own getch, system("pause") or input loop /
int getlength(char[]);
int main() {
	char str[10];
	int l;
	printf("Enter any name");
	scanf("%s",str);//abcd\0
	l=getlength(str);
	printf("Legth of your name is %d",l);
	return 0;
}
int getlength(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}