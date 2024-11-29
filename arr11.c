#include <stdio.h>

int main()
{
    int i, j, m, n, sum, fsum, asum = 0;
    printf("Enter the number of rows :\n");
    scanf("%d", &m);
    printf("Enter the number of columns :\n");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the array:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        fsum = 0;
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
            fsum = sum;
        }
        asum = asum + fsum;
    }
    printf("The sum of the 2-D array is :%d", asum);
    return 0;
}