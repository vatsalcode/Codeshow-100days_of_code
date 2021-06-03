#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter no of elemets of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++) {
 
        /*Generate all subarray of odd length*/
        for (int j = i; j < n; j += 2) {
 
            for (int k = i; k <= j; k++) {
 
                /*Add the element to sum*/
                sum += arr[k];
            }
        }
    }
    printf("%d",sum);
    return 0;
}
