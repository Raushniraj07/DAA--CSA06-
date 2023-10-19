#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, m, n, p, q;
    int sum = 0;

    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of matrix A: \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);

    if(n != p)
    {
        printf("Error! The number of columns in matrix A must be equal to the number of rows in matrix B.\n");
        return 0;
    }

    printf("Enter the elements of matrix B: \n");
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            for(k = 0; k < p; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }

            c[i][j] = sum;
            sum = 0;
        }
    }

    printf("Result of matrix multiplication A*B:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
