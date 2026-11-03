#include <stdio.h>

int main(){
	int a, b,max;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	if (a>=b){
		max=a;
	}
	if (b>a){
		max=b;
	}
	printf("max: %d", max);
	return 0;
}