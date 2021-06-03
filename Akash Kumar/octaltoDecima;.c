#include <stdio.h>
#include <math.h>
 
int main()
{
 
    long int octal, decimal = 0;
    int i = 0;
 
    printf("Enter any octal number: ");
    scanf("%ld", &octal);
    while (octal != 0)
    {
        decimal =  decimal +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    printf("Equivalent decimal value: %ld",decimal);
    return 0;
}
