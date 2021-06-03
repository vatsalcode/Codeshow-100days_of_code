#include <stdio.h>
    #include <stdlib.h>
 
    void readmatA();
    void printmatA();
    void readmatB();
    void printmatB();
 
    void sum();
    void diff();
 
    int a[10][10], b[10][10], sumarray[10][10], arraydiff[10][10];
    int i, j, row1, column1, row2, column2;
 
    void main()
    {
 
        printf("Enter the order of the matrix A \n");
        scanf("%d %d", &row1, &column1);
 
        printf("Enter the order of the matrix B \n");
        scanf("%d %d", &row2, &column2);
 
        if (row1 != row2 && column1 != column2)
        {
            printf("Addition and subtraction are possible \n");
            exit(1);
        }
 
        else 
        {
 
            printf("Enter the elements of matrix A \n");
            readmatA();
 
            printf("MATRIX A is \n");
            printmatA();
 
            printf("Enter the elements of matrix B \n");
            readmatB();
 
            printf("MATRIX B is \n");
            printmatB();
 
            sum();
            diff();
 
        }
 
    }
 
    /*  Function to read a matrix A */
 
    void readmatA() 
    {
        for (i = 0; i < row1; i++) 
        {
            for (j = 0; j < column1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        return;
    }
 
    /*  Function to read a matrix B */
 
    void readmatB() 
    {
        for (i = 0; i < row2; i++) 
        {
            for (j = 0; j < column2; j++) 
            {
                scanf("%d", &b[i][j]);
            }
        }
    }
 
    /*  Function to print a matrix A */
 
    void printmatA()
    {
        for (i = 0; i < row1; i++) 
        {
            for (j = 0; j < column1; j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
 
    }
 
    /*  Function to print a matrix B */
 
    void printmatB() 
    {
        for (i = 0; i < row2; i++) 
        {
            for (j = 0; j < column2; j++)
            {
                printf("%3d", b[i][j]);
            }
            printf("\n");
        }
 
    }
 
    /*  Function to do the sum of elements of matrix A and Matrix B */
 
    void sum() 
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++) 
            {
                sumarray[i][j] = a[i][j] + b[i][j];
            }
 
        }
 
        printf("Sum matrix is \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("%3d", sumarray[i][j]) ;
            }
            printf("\n");
 
        }
        return;
 
    }
 
    /*  Function to do the difference of elements of matrix A and Matrix B */
 
    void diff()
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                arraydiff[i][j] = a[i][j] - b[i][j];
            }
 
        }
 
        printf("Difference matrix is \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("%3d", arraydiff[i][j]);
 
            }
            printf("\n");
 
        }
        return;
 
    }
