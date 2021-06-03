#include <stdio.h>
    #define MAXROWS 10
    #define MAXCOLS 10
 
    void readMatrix(int arr[][MAXCOLS], int m, int n);
    void printMatrix(int arr[][MAXCOLS], int m, int n);
    void productMatrix(int array1[][MAXCOLS], int array2[][MAXCOLS],
    int array3[][MAXCOLS], int m, int n);
 
    void main()
    {
 
        int array1[MAXROWS][MAXCOLS], array2[MAXROWS][MAXCOLS],
        array3[MAXROWS][MAXCOLS];
        int m, n;
 
        printf("Enter the value of m and n \n");
        scanf("%d %d", &m, &n);
 
        printf("Enter Matrix array1 \n");
        readMatrix(array1, m, n);
        printf("Matrix array1 \n");
        printMatrix(array1, m, n);
 
        printf("Enter Matrix array2 \n");
        readMatrix(array2, m, n);
        printf("Matrix B \n");
        printMatrix(array2, m, n);
 
        productMatrix(array1, array2, array3, m, n);
        printf("The product matrix is \n");
        printMatrix(array3, m, n);
 
    }
 
    /*  Input Matrix array1 */
 
    void readMatrix(int arr[][MAXCOLS], int m, int n)
    {
 
        int i, j;
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                scanf("%d", &arr[i][j]);
            }
        }
    }
 
    void printMatrix(int arr[][MAXCOLS], int m, int n)
    {
 
        int i, j;
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++)
            {
                printf("%3d", arr[i][j]);
            }
            printf("\n");
        }
    }
 
    /*  Multiplication of matrices */
 
    void productMatrix(int array1[][MAXCOLS], int array2[][MAXCOLS],
    int array3[][MAXCOLS], int m, int n)
    {
 
        int i, j, k;
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                array3[i][j] = 0;
                for (k = 0; k < n; k++) 
                {
                    array3[i][j] = array3[i][j] + array1[i][k] * array2[k][j];
                }
            }
        }
    }
