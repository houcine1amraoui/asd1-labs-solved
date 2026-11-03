#include <stdio.h>

int main(){
	int sec;
	printf("Enter time in seconds");
	scanf("%d", &sec);
	int s = sec % 60;
	int m = sec /60 % 60;
	int h = sec /60 /60;
	printf("Time now is: %d:%d:%d", s, m, h);
}