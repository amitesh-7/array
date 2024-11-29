#include <stdio.h>

int main()
{
    int i, j, m, n, rsum, csum, asum, bsum;
    printf("Enter the number of rows :\n");
    scanf("%d", &m);
    printf("Enter the numbers of columns :\n");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the elements of matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        rsum = 0;
        for (j = 0; j < n; j++)
        {
            rsum = rsum + arr[i][j];
            asum = rsum;
        }
        printf("The sum of the row %d is: %d\n", i + 1, asum);
    }
    for (j = 0; j < n; j++)
    {
        csum = 0;
        for (i = 0; i < m; i++)
        {
            csum = csum + arr[i][j];
            bsum = csum;
        }
        printf("The sum of the column %d is: %d\n", j + 1, bsum);
    }
    return 0;
}