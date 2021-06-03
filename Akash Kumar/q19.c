#include <stdio.h>
int main() 
{
int N; //Number of * in the middle row
scanf("%d", &N); //Value of N is taken from test data

int i,j,k,s=1;
	for (i=1; i<=N; i++) {
		for (k=s; k<N; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf("*");
		}
		s = s + 1;
		printf("\n");
	}
	s = 1;
	for (i=N-1; i>=1; i--) {
		for (k=s; k>0; k--) {
			printf(" ");
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		s = s + 1;
		printf("\n");
	}

}
