
#include <stdio.h>

int main() {
    int N, i, POS;
    float MAX;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    float A[N];

    // Read array elements
    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &A[i]);
    }

    // Initialize MAX and POS
    MAX = A[0];
    POS = 0;

    // Find the maximum element
    for (i = 1; i < N; i++) {
        if (A[i] > MAX) {
            MAX = A[i];
            POS = i;
        }
    }

    // Display the result
    printf("Maximum element = %.2f\n", MAX);
    printf("Position = %d\n", POS + 1);

    return 0;
}
