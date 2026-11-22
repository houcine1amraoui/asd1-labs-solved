#include <stdio.h>

int main() {
    int N, i;
    float A[100];

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    // Read the array elements
    for (i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &A[i]);
    }

    // Display the array in reverse order
    printf("\nArray elements in reverse order:\n");

    for (i = N - 1; i >= 0; i--) {
        printf("%.2f ", A[i]);
    }

    printf("\n");

    return 0;
}
