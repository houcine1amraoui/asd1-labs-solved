#include <stdio.h>

int prime1(){
	int n;
	printf("enter a nbr: ");
	scanf("%d", &n);
	for(int i=2;i<=n/2; i++){
		if(n%i==0){
			printf("%d is not prime", n);
			break;
		}
	}
	printf("%d is prime", n);
}

int prime2(){
	int n;
	printf("enter a nbr: ");
	scanf("%d", &n);
	int i=2;
	while(i<n/2){
		if(n%i==0){
			printf("%d is not prime", n);
			break;	
		}
		i++;
	}
	printf("%d is prime", n);
}

int prime3(){
	int n;
	printf("enter a nbr: ");
	scanf("%d", &n);
	for(int x=2; x<=n; x++){
		int i=2;
		while(i<n/2){
			if(n%i==0){
				printf("%d is not prime", n);
				break;	
			}
			i++;
		}
	}
	printf("%d is prime", n);
}

int main(){
	prime1();
	prime2();
	prime3();
	return 0;
}