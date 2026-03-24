#include <stdio.h>

void binary(int arr[], int LB, int UB, int ITEM) {
    int BEG = LB;
    int END = UB;
    int MID;
    int LOC = -1;

    while (BEG <= END) {
        MID = (BEG + END) / 2;

        if (arr[MID] == ITEM) {
            LOC = MID;
            break;
        }
        else if (ITEM < arr[MID]) {
            END = MID - 1;
        }
        else {
            BEG = MID + 1;
        }
    }

    if (LOC != -1)
        printf("Item found at location: %d\n", LOC);
    else
        printf("Item not found\n");
}
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38};
    int n=7;

    binary(arr, 0, n - 1, 16);

    return 0;
}
