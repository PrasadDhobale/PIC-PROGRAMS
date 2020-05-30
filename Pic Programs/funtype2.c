#include <stdio.h>
#include <stdlib.h>
/* TYPE-2 ->with argument and without return type*/
void circle(int);
int main() {
	float r;
	printf("\nEnter radius for circle");
	scanf("%f",&r);//5
	circle(r);//with argument..
	
	return 0;
}
void circle(float r){//5
	float ca;
	ca=3.14*r*r;
	printf("\nArea of circle is :%f",ca);
	//return null
}


