#include <stdio.h>
int main()
{
    int decimalnum, remainder, quotient, Quotient;
    int octalNumber[100], i = 1, j;
    // printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    // printf("Equivalent octal value of decimal no %d: ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
    printf("\n");
    i=0;
    j = 0;
    char hexadecimalnum[100];
    Quotient = decimalnum;
    while (Quotient != 0)
    {
        remainder = Quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        Quotient = Quotient / 16;
    }
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);
    return 0;
}
