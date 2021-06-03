/* Write a program to find Sum of series S=1+(1+2)+(1+2+3)+..….+(1+2+3+…+n) */

#include<stdio.h>
int main()
{
        int n;
        scanf("%d",&n); //Value of n is accepted from test case
 

// Use the printf statement as:
//printf("The Sum of Series up to Value %d = %d\n",n,sum);
int sum,sum1=0,i,j;
for(i=1;i<=n;i++)
    {
      sum=0;
      for(j=1;j<=i;j++)
        sum=sum+j;
        sum1=sum1+sum;
    }
 
        printf("The Sum of Series up to Value %d = %d\n",n,sum1);
 
        return 0;
}
