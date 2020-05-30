//////////Funtype 4/////////////////////
#include <stdio.h>
#include <stdlib.h>

float triangle(float,float);

int main() {
	float ta,b,h;
	printf("Enter radius for circle");
	scanf("%f%f",&b,&h);
	//ta=triangle(b,h);
	printf("Area of triangle is : %f",triangle(b,h));
	return 0;
}
float triangle(float b,float h)
{
	return 0.5*b*h;
}
//////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

float circle(float);

int main() {
	float ca,r;
	printf("Enter radius for circle");
	scanf("%f",&r);
	ca=circle(r);
	printf("Area of circle is : %f",ca);
	return 0;
}
float circle(float x)
{
	float ca;
	ca=3.14*x*x;
	return ca;
}