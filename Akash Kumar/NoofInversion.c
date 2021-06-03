/*  You are given a sequence of positive integers, terminating in a
-1. (The -1 is not part of the sequence, it is used to denote the end
of the input.) There are at most 100 integers in the sequence.

An inversion is a pair of integers (i,j) such that i occurs before j
in the sequence, but i > j.

You have to output the number of inversions in the input sequence.


Sample Input 1
-------------
1 3 2 -1


Sample Output 1
--------------
1

Explanation for Sample 1
------------------------
The pairs of integers in the sequence are (1,3), (1,2) and
(3,2). Among these, (3,2) is the only inversion.


Sample Input 2
---------------
20 20 5 4 -1

Sample Output 2
----------------
5

Explanation for Sample 2
------------------------
The pairs of integers are (20,20), (20,5), (20,4), (20,5), (20,4) and
(5,4). All except (20,20) are inversions. 

*/ 

#include <stdio.h>



int main()
{
	
	int sequence[100];
	int i,j,n;
	int length=0;
	int inversion_count=0;

	for(i=0;i<100;i++){
		scanf("%d",&n);
		if ( n == -1 ){
			break;
		}
		sequence[i] = n;
		length = length+1;
	}

	for(i=0;i<length;i++){
		for(j=i+1;j<length;j++){
			if( sequence[i] > sequence[j] ){
				inversion_count = inversion_count+1;
			}
		}
	}
	printf("%d\n",inversion_count);
	return 0;
}
