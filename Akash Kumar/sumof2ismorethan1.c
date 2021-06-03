#include <stdio.h>
 
int main()
{
    int a;
    int b;
    int c;
 
 
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
 
    if((a+b)>c)
    {
        printf("1\n");
    }else{
        printf("0\n");
    }
 
    return 0;
}
