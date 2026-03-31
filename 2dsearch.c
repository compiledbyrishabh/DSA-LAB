#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c,target;
    bool a = true;
    printf("Enter the no. of rows : ");
    scanf("%d", &r);
    printf("Enter the no. of columns : ");
    scanf("%d", &c);
    int matA[r][c];
    printf("Enter the %d elements in matrix A (%dx%d)\n", r * c, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matA[i][j]);
        }
        printf("\n");
    }
    printf("Entered  %d elements in matrix A (%dx%d)\n", r * c, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element to search : ");
    scanf("%d",&target);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(matA[i][j]==target){
            a = false;
            printf("Element Found at %d,%d",i+1,j+1);
            break;
            }
        }
    }
    if (a){
    printf("Element Not Found");
    }
    return 0;
}
