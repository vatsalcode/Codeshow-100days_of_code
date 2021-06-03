#include<stdio.h>
void main(){
printf("ODD OR EVEN\n");
int a;
printf("Enter a\n");
scanf("%d", &a);
if (a%2==0)
{
    printf("%d is an Even number\n", a);
}
else 
{
    printf("%d is an Odd number\n", a);
}
}
