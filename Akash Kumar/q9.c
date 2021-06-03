#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter no of elements of array");
    scanf("%d", &n);
    int arr[n];
    int i, x;
    for (i = 0; i < n; i++)
    {
        printf("Enter the %dth element", i + 1);
        scanf("%d", &arr[i]);
    }
    int A, B, C;
    printf("Enter A , B and C");
    scanf("%d%d%d", &A, &B, &C);
    int p, q, r;
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                p = arr[i] - arr[j];
                q = arr[j] - arr[k];
                r = arr[i] - arr[k];
                if ((abs(p) <= A) &&
                    (abs(q) <= B) && (abs(r) <= C))
                {
                    count = count + 1;
                }
            }
        }
    }
    printf("the triple is %d", count);
}
