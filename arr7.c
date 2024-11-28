#include <stdio.h>

int main(){
    int i, j, m, n;
    printf("Enter number of rows:\n");
    scanf("%d", &m);
    printf("Enter number of columns:\n");
    scanf("%d", &n);
    int a[m][n], b[m][n];
    printf("Enter the matrix which should be copied:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            b[i][j]=a[i][j];
        }
    }
    printf("The matrix is:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}