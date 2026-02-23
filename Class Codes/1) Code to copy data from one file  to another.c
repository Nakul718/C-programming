#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("f1.txt", "r");
    fp2 = fopen("f2.txt", "w");

    while (ch != EOF)
    {
        ch = fgetc(fp1);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
