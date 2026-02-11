#include <stdio.h>

int main()
{
    int a, q1, q2, q3, r1, r2, r3, r4, r5, Sum;

    printf("Enter a five digit number:");
    scanf("%d", &a);

    q1 = a / 10;
    r1 = a % 10;

    q2 = q1 / 10;
    r2 = q1 % 10;

    q3 = q2 / 10;
    r3 = q2 % 10;

    r4 = q3 % 10;
    r5 = q3 / 10;

    Sum = r1 + r2 + r3 + r4 + r5;

    printf("Sum = %d\n", Sum);

    return 0;
}
