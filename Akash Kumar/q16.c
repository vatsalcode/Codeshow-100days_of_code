#include<stdio.h>
int main() {
    int a=5;
    printf("value of address is %u\n", &a);
    printf("value of a is %d", *(&a));
    return 0;
}
