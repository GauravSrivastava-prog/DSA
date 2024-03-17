#include <stdio.h>

int main()
{
    int rows, column;
    int sum = 0;
    printf("Enter rows : ");
    scanf("%d", &rows);
    printf("Enter Column : ");
    scanf("%d", &column);
    int mat1[rows][column], mat2[rows][column], sumarr[rows][column];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            for (int k = 0; k < rows; k++)
            {
                sum = sum + (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));
            }
            (*(*(sumarr + i) + j)) = sum;
            sum = 0;
        }
    }
    printf("Product of two matrix is : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", (*(*(sumarr + i) + j)));
        }
        printf("\n");
    }
}