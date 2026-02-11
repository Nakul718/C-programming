#include <stdio.h>
int main()
{
    int a, h, m, x1, s;
    printf("Enter the value in seconds");
    scanf("%d", &a);

    h = a / 3600;
    x1 = a % 3600;
    m = x1 / 60;
    s = x1 % 60;

    printf("Time = %d hours, %d minutes, %d seconds\n", h, m, s);
    return 0;
}
