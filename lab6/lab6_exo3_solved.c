#include <stdio.h>

int main() {
    int N, X, i, COUNT = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int A[N];

    // Read array elements
    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    // Read the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &X);

    // Count occurrences
    for (i = 0; i < N; i++) {
        if (A[i] == X) {
            COUNT++;
        }
    }

    // Display the result
    printf("The number of occurrences of %d is: %d\n",
           X, COUNT);

    return 0;
}
