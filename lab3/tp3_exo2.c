#include <stdio.h>

int main() {
	char c_min, c_maj;
	printf("entrer une lettre minuscule \n");
	scanf("%c",&c_min);
	c_maj = c_min - ('g' - 'G');
	printf("%c in uppercase is %c", c_min, c_maj);
}