#include <stdio.h>

void linear(int arr[], int LB, int UB, int ITEM) {
    int i;
    int LOC = -1;

    for (i = LB; i <= UB; i++) {
        if (arr[i] == ITEM) {
            LOC = i;
            break;
        }
    }

    if (LOC != -1)
        printf("Item found at location: %d\n", LOC);
    else
        printf("Item not found\n");
}
int main() {
    int arr[] = {2,12, 5, 8, 16, 23, 38};
    int n = 7;

    linear(arr, 0, n - 1, 16);

    return 0;
}
