//funcutional problem
#include<stdio.h>
int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{

    int sum, sum1 = 0, sum2 = 0;

    for (int i = 0; i < arr_rows; i++)
    {
        for (int j = 0; j < arr_columns; j++)
        {
            if (i == j)
            {
                sum1 += arr[i][j];
            }
        }
    }
    for (int i = 0; i < arr_rows; i++)
    {
        for (int j = 0; j < arr_columns; j++)
        {
            if (i + j == arr_rows)
            {
                sum2 += arr[i][j];
            }
        }
    }

    sum = abs(sum2 - sum1);

    return sum;
}

int main()
{
    int columns, rows, n, **array;
    scanf("%d", &n);
    columns = n;
    rows = n;

    array = malloc(sizeof(int) * columns);
    for (int i = 0; i < columns; i++)
    {
        array[i] = malloc(sizeof(int) * rows);
    }

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    /*******************      print     *************/
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", array[i][j]);
            }
        }
    }
        printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n-1)
            {
                printf("%d ", array[i][j]);
            }
        }
    }
    /*************** funtional operation ******/
    int solution = diagonalDifference(rows, columns, array);
    printf("\n\n%d", solution);

    return 0;
}
