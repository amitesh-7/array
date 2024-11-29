#include <stdio.h>

int main(){
    int i, j, m, n, p, q, sum=0;
    printf("The number of rows of matrix A :\n");
    scanf("%d", &m);
    printf("The number of columns of matrix A :\n");
    scanf("%d", &n);
    printf("The number of rows of matrix B :\n");
    scanf("%d", &p);
    printf("The number of columns of matrix B :\n");
    scanf("%d", &q);
    int a[m][n], b[p][q], c[m][q];
    if (n!=p)
    {
        printf("The matrix multiplication is not possible. \n");
    }
    else
    {
        printf("Enter the matrix A :\n");
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the matrix B :\n");
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < n; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < n; j++)
            {
                sum=0;
                for (int k = 0; k < q; k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                    c[i][j]=sum;
                }
            }
        }
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < n; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        
    }
    
    return 0;
}