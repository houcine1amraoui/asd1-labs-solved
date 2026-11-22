#include <stdio.h>
int main() {
    int n, f, i;
    printf("enter a nbr: ");
    scanf("%d", &n);
    f=1;
    for(i=2; i<=n; i++)
        f*=i ;
    printf("%d!= %d", n, f) ;
}