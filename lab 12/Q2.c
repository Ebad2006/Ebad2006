/*Write a program to dynamically allocate memory for 2, 2D arrays of size m×n. Input the dimensions m and n and
the elements of the matrices, then find the multiplication in a function by passing reference of the matrices.*/

#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **mat1, int **mat2, int **result, int m, int n, int p)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int m, n, p;

    printf("Enter the number of rows and columns for the first matrix (m x n): \n");
    scanf("%d %d", &m, &n);
    printf("Enter the number of columns for the second matrix (n x p): \n"); // n will remain same
    scanf("%d", &p);

    int **mat1 = (int **)malloc(m * sizeof(int *));
    int **mat2 = (int **)malloc(n * sizeof(int *));
    int **result = (int **)malloc(m * sizeof(int *));

    for (int i = 0; i < m; i++)
        mat1[i] = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        mat2[i] = (int *)malloc(p * sizeof(int));
    for (int i = 0; i < m; i++)
        result[i] = (int *)malloc(p * sizeof(int));

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("The first Matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("The second Matrix is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    multiplyMatrices(mat1, mat2, result, m, n, p);

    printf("Resultant Matrix after Multiplication:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
        free(mat1[i]);
    for (int i = 0; i < n; i++)
        free(mat2[i]);
    for (int i = 0; i < m; i++)
        free(result[i]);
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}
