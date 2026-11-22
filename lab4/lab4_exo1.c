#include <stdio.h>

int main(){
	int a, b, c;
	printf("Enter three integers...");
	scanf("%d %d %d", &a, &b, &c);
	if(a%2 != 0){
		printf("%d is odd \n", a);
	}
	if(b%2 != 0){
		printf("%d is odd \n", b);
	}
	if(c%2 != 0){
		printf("%d is odd \n", c);
	}
}