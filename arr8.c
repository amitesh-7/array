#include <stdio.h>

int main()
{
    int i, j, m, n, big;
    printf("Enter number of rows: \n");
    scanf("%d", &m);
    printf("Enter number of columns: \n");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    big = arr[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (big < arr[i][j])
            {
                big = arr[i][j];
            }
        }
    }
    printf("The biggest element in the array is %d.\n", big);
    return 0;
}