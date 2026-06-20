#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int a[100][100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row wise sum:\n");
    for(i = 0; i < rows; i++)
    {
        int sum = 0;
        for(j = 0; j < cols; j++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}