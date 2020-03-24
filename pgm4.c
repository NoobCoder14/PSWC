#include<stdio.h>
#define PI 3.14

int main(){
	float rad;
	scanf("%f",&rad);
	float dia,peri,area;
	dia = 2*rad;
	peri = 2*PI*rad;
	area = PI*rad*rad;
	printf("Radius: %.2f, Diameter: %.2f, Perimeter: %.2f, Area: %.2f.\n",rad,dia,peri,area);
	return 0;
}