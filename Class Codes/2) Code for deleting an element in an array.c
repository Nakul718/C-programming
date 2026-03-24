#include <stdio.h>

#define max 100

int main() {
    int LA[max], N, k, i;
    printf("Enter number of elements (N): ");
    scanf("%d", &N);

    if (N > max) {
        printf("Size exceeds maximum limit.\n");
        return 0;
    }

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &LA[i]);
    }

    printf("Enter position (k) of element to delete: ");
    scanf("%d", &k);

    if (N == 0) {
        printf("Underflow! Array is empty.\n");
        return 0;
    }

    if (k < 0 || k >= N) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = k; i < N - 1; i++) {
        LA[i] = LA[i + 1];
    }

    N = N - 1;

    printf("Array after deletion:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }

    return 0;
}
