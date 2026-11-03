#include <stdio.h>

int main(){
	const float pi=3.14;
	float deg, rad, gr;
	printf("enter an angle in degrees");
	scanf("%f", &deg);
	rad = deg *pi/180;
	gr = rad *200/pi;
	printf("%.2f°=%.2f rad =%.2f gr", deg, rad, gr);
}