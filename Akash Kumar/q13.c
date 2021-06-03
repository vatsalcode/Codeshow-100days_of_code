#include<stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    int d;
    int greatest=0;
    printf("ENTER 1ST NUMBER");
    scanf("%d", &a);
    printf("ENTER 2nd NUMBER");
    scanf("%d", &b);
    printf("ENTER 3rd NUMBER");
    scanf("%d", &c);
    printf("ENTER 4th NUMBER");
    scanf("%d", &d);
    if(a>>b) {
        greatest=a;
    }
    else
    {
        greatest=b;
    }
    
    
    
    printf("Greatest number is %d", greatest);

    return 0;
}
