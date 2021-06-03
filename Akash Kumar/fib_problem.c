/*  A sequence of positive numbers is defined as :
             
          f(n) = f(n-1) + f(n-2)  for all n >2

and f(1) ,f(2) are defined explicitly.

For example : If we define f(1) = 1 and f(2) =2

Then the sequence obtained is 1 2 3 5 8 13.........

The distance of two numbers a and b is defined as the |a-b| or the positive difference of the numbers.
For example: Distance of 2 and 3 is |2-3|=1 .
                      Distance of 14 and 9 is |14-9| = 5

In this question you will be given the first two elements of the sequence separated by the space and in next line a number let say p. 
You need to output the minimum distance of p to the elements of sequence.
 
Example : 
I/P : 1 1
       6
So, the sequence is 1 1 2 3 5 8 13.......
Minimum distance of 6 to sequence is |5-6| = 1
O/P : 1
Constraints :
First two elements(f(1) and f(2)) of the sequence are in monotonically increasing order and are positive integers. 
p is an integer.   */

#include <stdio.h>
#include <stdlib.h>
int min(int a, int b);
int fib(int m, int n, int p);
int main()
{
	int m,n,p,x,z;
	scanf("%d %d %d",&m,&n,&p);
	if(p<=m)
	{
	    printf("%d",m-p);
	    exit(1);
	}
	if(p>m && p<=n)
	{
	   z=min(p-m,n-p);
	   printf("%d",z);
	   exit(1);
	}
	
	x = fib(m,n,p); 
	printf("%d",x);
	return 0;
}
int min(int a, int b)
{
   if(a>b)
    return b;
    else
     return a;
}

int fib(int m, int n, int p)
 {
    int x = m+n;
    if(x<p)
      fib(n,x,p);
    else
      return(min((x-p),(p-n)));
    
 }
