#include <stdio.h>

int main(){
	int year;
	// 2024 => leap
	// 1900 => not leap
	// 2000 => leap
	printf("Enter a year");
	scanf("%d", &year);
	if(year%4==0){
		if(year%100==0 && year%400!=0){
			printf("not leap");
		}else{
			printf("leap");
		}
		
	}else{
		printf("not leap");
	}
	
}