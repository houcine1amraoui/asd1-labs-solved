#include <stdio.h>

int main(){
	// variables
	char lower, upper;
	printf("Enter a lowercase letter");
	scanf("%c", &lower);
	upper = lower - 32;
	printf("The upper of %c is %c", lower, upper);
}