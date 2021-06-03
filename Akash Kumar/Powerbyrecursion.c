#include <stdio.h>
 
long power (int, int);
 
int main()
{
    int pow, num;
    long result;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &pow);
    result = power(num, pow);
    printf("%d^%d is %ld", num, pow, result);
    return 0;
}
 
long power (int num, int pow)
{
    if (pow)
    {
        return (num * power(num, pow - 1));
    }
    return 1;
}
