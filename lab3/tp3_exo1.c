#include <stdio.h>
void calculateAge(){
	char name[] = "";
	int birthY, currentY, age;
	printf("Enter you birth year \n");
	scanf("%d", &birthY);
	printf("Enter current year \n");
	scanf("%d", &currentY);
	age = currentY - birthY;
	printf("Your age is %d", age);
}
int main(){
	calculateAge();
	return 0;
}