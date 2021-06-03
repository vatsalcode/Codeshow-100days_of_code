#include<stdio.h>
   
#define MAX 10
 
int main()
{
    int i,j;
 
    for(i=0; i< MAX; i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=MAX-1; i>=1 ; i--)
    {
       
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
