#include <stdio.h>

int main() {
    int n, digit, reverse = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10; // extract the last digit
        reverse = reverse * 10 + digit; // append the digit to the reverse number
        n = n / 10; // remove the last digit from n
    }

    printf("Mirror image = %d", reverse);
    return 0;
}
