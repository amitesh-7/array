#include <stdio.h>

int main()
{
    int i, j, m, n;
    printf("Enter number of rows:\n");
    scanf("%d", &m);
    printf("Enter number of columns:\n");
    scanf("%d", &n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    printf("Enter first matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of the matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}