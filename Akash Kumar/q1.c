#include <stdio.h>
int is_prime(int num)
{
	int i;
	for (i = 2; i < num / 2 + 1; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i, j, rows, x, num=2;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("* \n");
	for (i = 2; i <= rows; i++)
	{
		for (j = 1; j <= i; ++j)
		{
			
			x = is_prime(num);
			if (x == 1)
				printf("# ");
			else
				printf("* ");
			num=num+1;
		}
		printf("\n");
	}
	return 0;
}
