#include <stdio.h>

int main(){
	int t, h, m, s;
	printf("Enter time in seconds: ");
	scanf("%d", &t);
	// e.g., 3675 => 01:01:15
	h = t/60/60; // 1
	// 2. get minutes
	m = (t/60)%60; // 1
	// 3. get seconds
	s = t%60;
	printf("%d:%d:%d", h, m, s);
	return 0;
}