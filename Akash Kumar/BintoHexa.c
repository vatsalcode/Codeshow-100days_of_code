#include <stdio.h>
 
int main()
{
    long int binary, hexadecimalval = 0, i = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binary);
    while (binaryval != 0)
    {
        remainder = binary % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binary = binary / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
    return 0;
}
