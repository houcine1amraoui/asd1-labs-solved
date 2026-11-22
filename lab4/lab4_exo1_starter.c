#include <stdio.h>

int main(){
	// read three integer numbers
	// check each one if odd (impair) or even (pair)
	// even => %2==0 or %2!=1
	// odd => %2==1 or %2!=0
	int a, b, c;
	printf(".....");
	scanf("%d %d %d", &a, &b, &c);
	if(a%2!=1){
		printf("%d is odd", a);
	}
}