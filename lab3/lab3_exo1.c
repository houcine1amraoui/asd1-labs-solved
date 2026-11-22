#include <stdio.h>
int main(){
	char name[20];
	int birth, current, age;
	printf("Enter your name");
	scanf("%s", &name);
	printf("Enter your birth year");
	scanf("%d", &birth);
	printf("Enter the current year");
	scanf("%d", &current);
	age = current - birth;
	printf("Hello %s you are %d years old", name, age);
	
	
}