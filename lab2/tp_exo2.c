#include <stdio.h>
int main(){
    printf("%f\n", 5-3.*2+2);
    printf("%f\n", 10*1.0/5*5);
    printf("%d\n", (7+6) % 5);
    printf("%d\n", 12 / 2 > 17 % 5 *2 );
    printf("%d\n", 1380 / 60 % 60 );
    printf("%d\n", 'h'>'Q' && 17>5);
    printf("%d\n", !('h'>'Q' ));
    return 0;
}