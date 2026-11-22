#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input!\n");
    }
    else if (n == 0) {
        printf("Fibonacci term = 0\n");
    }
    else if (n == 1) {
        printf("Fibonacci term = 1\n");
    }
    else {
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        printf("Fibonacci term = %d\n", b);
    }

    return 0;
}
