#include <stdio.h>

int main(){
	// read an integer number
	// n = 6
	// 6%1==0
	// 6%2==0
	// 6%3==0
	// 6%4!=0
	// 6%5!=0
	// 6%6==0
	int i=2;
	while(i<n/2){
		//
		printf("...")
		i=i+1;
	}
	
	
	int prime = 1;
	for(int i=2;i<=n/2; i++){
		if(n%i==0){
			prime = 0;
			break;	
		}
	}
	// check if prime is 1 or 0
	if(prime==1){
		printf("prime");
	}else{
		printf("not prime");
	}
	
}