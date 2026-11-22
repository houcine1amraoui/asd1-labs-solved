#include <stdio.h>

int main(){
	// read an int number
	// n*(n-1)*(n-2)*...*1      n -> 1
	// 1*2*...*(n-2)*(n-1)*n    1 -> n
	//	0! = 1

	// n = 4, result = 1, result = result*i
	// i=1 result = 1*1=1
	// i=2 result = 1*2=2
	// i=3 result = 2*3=6
	// i=4 result = 6*4=24
	int n, result = 1;
	for(int i=2;i<=n;i++){
		result = result * i;
	}
	printf("%d", result);
	
	
	
	
	
	
	
	
	
	
	int n, result = 1;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		result=result*i;
	}
	printf("%d", result);
	
}