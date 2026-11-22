#include <stdio.h>
int x;
int main(){
    x=100;
    printf("%o \t %d \t %x \t %c\n", x, x, x, x);
    printf("its square = %d \t its cube= %d \n", x*x, x*x*x);
    return 0;
}