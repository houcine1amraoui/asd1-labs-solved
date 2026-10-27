#include <stdio.h>

int main(){
	char name[20]; // array of 20 characters (string)
	int birth, current, age;
	printf("Enter your name:");
	scanf("%s", &name); // address of variable "name"
	printf("Enter your year of birth:");
	scanf("%d", &birth);
	printf("Enter the current year:");
	scanf("%d", &current);
	age = current - birth;
	printf("Hello %s you are %d years old", name, age);
}