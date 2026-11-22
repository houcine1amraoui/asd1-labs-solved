#include <stdio.h>

int main(){
	int t, h, m, s;
	printf("Enter time in seconds...");
	scanf("%d", &t);
	h = t/3600; // 3675/3600=1 
	m = (t%3600)/60; //75/60=1
	s = (t%3600)%60; //75%60=15
	printf("Time is %d:%d:%d ", h, m, s);
	return 0;
}