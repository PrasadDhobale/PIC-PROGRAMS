/////funtype 3////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/* TYPE-3 ->without argument and with return type*/
float circle();
int main() {
	float ca;
	ca=circle();//with argument..
	printf("Area of circle is : %f",ca);
	return 0;
}
float circle(){//5
	float ca;
	float r;
	printf("\nEnter radius for circle");
	scanf("%f",&r);//5
	ca=3.14*r*r;
	return ca;
	//return null
}