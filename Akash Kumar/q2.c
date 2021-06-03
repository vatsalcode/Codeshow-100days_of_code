#include <stdio.h>
int main()
{
    int n, i, extraCandies, max = 0;
    printf("Enter no of array elements");
    scanf("%d",&n);
    int candies[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &candies[i]);
    }
    printf("Eter no of extraCandies");
    scanf("%d", &extraCandies);
    max = candies[0];
    for (i = 0; i < n; i++)
    {
        if (candies[i] > max)
            max = candies[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (candies[i] + extraCandies < max)
        {
            printf("FALSE");
        }
        else
        {
            printf("TRUE");
        }
    }
}
