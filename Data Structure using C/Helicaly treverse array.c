#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    if (row != col)
    {
        exit(0);
    }
    else
    {
        int size = row;
        int **arra;
        arra = malloc(size * sizeof(int));

        for (int row = 1; row <= size; row++)
        {
            arra[row] = malloc(size * sizeof(int));
        }

        printf("Array element\n");
        for (int row = 1; row <= size; row++)
        {
            for (int col = 1; col <=size; col++)
            {
                scanf("%d", &arra[row][col]);
            }
        }
        for (int row = 1; row <= size; row++)
        {
            for (int col = 1; col <=size; col++)
            {
                printf("%d ", arra[row][col]);
            }
            printf("\n");
        }

        /*********** now treverse ****************/
        row = 1;
        while (size > 0)
        {
            for (col = row; col <= size; col++)
            {
                printf("%d ", arra[row][col]);
            }
            for (col = row+1; col <= size; col++)
            {
                printf("%d ", arra[col][size]);
            }
            for (col = size-1; col >= row; col--)
            {
                printf("%d ", arra[size][col]);
            }
            for (col = size-1; col > row; col--)
            {
                printf("%d ", arra[col][row]);
            }

            row += 1;
            size -= 1;
        }
    }
    return 0;
}
