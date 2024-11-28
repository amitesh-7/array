#include <stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter number of rows:\n");
    scanf("%d", &m);
    printf("Enter number of columns:\n");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter elements of array \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Entered array is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}