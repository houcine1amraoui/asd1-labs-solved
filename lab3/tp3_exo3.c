#include <stdio.h>
int main(){
	float td, tp, exam, avg;
	printf("Enter TD mark:");
	scanf("%f", &td);
	printf("Enter TP mark:");
	scanf("%f", &tp);
	printf("Enter exam mark:");
	scanf("%f", &exam);
	avg = (td+tp+3*exam)/5;
	printf("Your average is: %f", avg);
}