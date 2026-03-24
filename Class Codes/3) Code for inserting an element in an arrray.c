
#define max 100

int main() {
    int LA[max], N, k, ITEM, i;
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

    printf("Enter position (k) where element is to be inserted: ");
    scanf("%d", &k);

    printf("Enter the item to insert: ");
    scanf("%d", &ITEM);
    if (N == max) {
        printf("Overflow! Cannot insert element.\n");
        return 0;
    }
    if (k < 0 || k > N) {
        printf("Invalid position!\n");
        return 0;
    }
    for (i = N - 1; i >= k; i--) {
        LA[i + 1] = LA[i];
    }
    LA[k] = ITEM;
    N = N + 1;
    printf("Array after insertion:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }

    return 0;
}
