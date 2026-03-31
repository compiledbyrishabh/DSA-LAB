#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the no. of rows : ");
    scanf("%d", &r);
    printf("Enter the no. of columns : ");
    scanf("%d", &c);
    int matA[r][c], matB[r][c], res[r][c];
    printf("Enter the %d elements in matrix A (%dx%d)\n", r * c, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matA[i][j]);
        }
        printf("\n");
    }
    printf("Enter the %d elements in matrix B (%dx%d)\n", r * c, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matB[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j] = 0;
            for(int k=0; k<c; k++)
            {
            res[i][j] += matA[i][k] * matB[k][j];
            }
    }
    }
    printf("Here is the matrix after multiplication\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%4d", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
