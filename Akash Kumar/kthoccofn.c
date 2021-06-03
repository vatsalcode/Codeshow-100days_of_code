/*Write a C function to find the kth occurrence of an odd integer in a sequence of non-negative integers, and then call your function from main. 

Your function should be according to the following declaration:

int find_odd(int k);

Input
You are given the input in two lines:

The first line contains a positive integer k. 
In the second line, you will be given a sequence of numbers. 

You have to find the kth occurrence of n in the sequence below. 

The second line consists of a sequence of non-negative integers,
terminated with a -1.  The -1 is not part of the sequence.

Output
If there are  k odd numbers in the sequence, then output the  kth
occurrence of odd in the sequence. Otherwise, output  -1.
*/

#include <stdio.h>

void find_odd ( int k )
{
	int odd_count=0;
	int curr;

	
	scanf("%d",&curr);
	while ( curr != -1 ){
		if ( curr % 2 == 1 ){
			odd_count = odd_count+1;
			if ( odd_count == k ){
				printf ( "%d\n", curr );
				return ;
			}
		}
		scanf ( "%d", &curr );
	}
	

	printf ( "-1\n" );
	return ;
}
int main()
{
	int k;

	scanf("%d",&k);
	find_odd(k);

	return 0;
}
