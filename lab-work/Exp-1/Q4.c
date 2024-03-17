#include <stdio.h>

int main()
{
    int rsum = 0, csum = 0;
    int rows, column;
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter column: ");
    scanf("%d", &column);
    int mat[rows][column];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    int i = 0, j = 0, k = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            rsum = rsum + mat[i][j];
        }
        printf("Sum of %d row : %d\n", (i + 1), rsum);
        for (k = 0; k < rows; k++)
        {
            csum = csum + mat[k][i];
        }
        printf("Sum of %d column : %d\n", (i + 1), csum);
    }
    printf("Total Row Sum : %d\nTotal Column Sum : %d\n", rsum, csum);
}
