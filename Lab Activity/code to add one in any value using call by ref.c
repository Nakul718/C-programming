#include <stdio.h>
void increment(int *num) {
    *num = *num + 1;
}
int main() {
    int value;
    printf("Enter a number: ");
    scanf("%d", &value);
    increment(&value);  //using call  by reference
    printf("Value after increment = %d", value);
    return 0;
}
