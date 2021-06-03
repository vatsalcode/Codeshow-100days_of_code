/* The Collatz function is defined for a positive integer n as follows.

f(n) = 3n+1 if n is odd

       = n/2     if n is even
       = 1 if n=1


We consider the repeated application of the Collatz function starting with a given integer n, as follows:

f(n), f(f(n)), f(f(f(n))), …


It is conjectured that no matter which positive integer n you start from, this sequence eventually will have 1 in it. It has been verified to hold for numbers up to 5 × 260  [Wikipedia: Collatz Conjecture]. */

#include <stdio.h>
int x =0;
void collatz_repeat(int n)
{
	
	if ( n == 1 ) 
	{
		if(x==0)
		printf("1");
		else
		return;
		
	}
	
	else{
		x=1;
		if ( n % 2 == 1 ) {
			printf("%d ",3*n+1 );
			collatz_repeat(3*n+1);
		}else{
			printf("%d ",n/2);
		    collatz_repeat(n/2);
		}
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	collatz_repeat(n); 
	return 0;
}
