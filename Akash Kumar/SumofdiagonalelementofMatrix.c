#include<stdio.h>

int main()
{
    int a[10][10], n; 
    scanf("%d", &n); //Size of the matrix is taken from test data

//Use the printf statement as:
//printf("Sum of the diagonal elements is = %d",variable_name);
 int d1sum=0, d2sum=0, i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;++j)
        scanf("%d",&a[i][j]); //Accepting the elements of the matrix from test case
    }
 
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
        {
            if(i==j)
                d1sum+=a[i][j];
            if(i+j==(n-1))
                d2sum+=a[i][j];
        }
 
    printf("Sum of the diagonal elements is = %d",d1sum+d2sum);
 
    return 0;
} 
