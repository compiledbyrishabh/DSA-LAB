#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter the no. of rows : ");
    scanf("%d", &r);
    printf("Enter the no. of columns : ");
    scanf("%d", &c);

    int mat[r][c], trans[c][r];

    printf("Enter the %d elements in the matrix (%dx%d):\n", r * c, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Here is the transpose of the matrix (%dx%d):\n", c, r);

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%4d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
