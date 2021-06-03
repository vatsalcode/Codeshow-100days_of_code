#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int CountTriplets(int arr[], int n, int A, int B, int C) 
{ 
    int p, q, r;
    int count = 0; 
    for(int i = 0; i < n - 2; i++) 
    { 
       for(int j=i+1; j < n - 1; j++) 
       { 
          for(int k=j+1; k < n; k++) 
          { 
              p=arr[i]-arr[j];
              printf("%d",p);
              q=arr[j]-arr[k];
              printf("%d", q);
              r=arr[i]-arr[k];
              printf("%d",r);
             if ((p <= A) &&  
                 (q <= B) && (r <= C))  
             { 
                 count=count+1; 
             } 
          } 
       } 
    } 
    return count; 
} 
*/
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
                printf("%d\n", p);
                q = arr[j] - arr[k];
                printf("%d\n", q);
                r = arr[i] - arr[k];
                printf("%d\n", r);
                if ((abs(p) <= A) &&
                    (abs(q) <= B) && (abs(r) <= C))
                {
                    count = count + 1;
                    printf("count is %d\n", count);
                }
            }
        }
    }
    //x = CountTriplets(arr[n], n, A, B, C);
    // printf("the triple is %d", x);
    printf("the triple is %d", count);
}
