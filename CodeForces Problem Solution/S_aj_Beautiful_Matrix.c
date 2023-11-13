#include<stdio.h>

int main()
{
    int array[5][5], i, j, x, y, r1, r2;

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &array[i][j]);

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (array[i][j] == 1)
            {
                x = i;
                y = j;
            }

    if (x <= 2 && y <= 2)
    {
        r1 = 2-x;
        r2 = 2-y;
    }
    else if (x <= 2 && y >= 2)
    {
        r1 = 2-x;
        r2 = y-2;
    }
    else if (x >= 2 && y <= 2)
    {
        r1 = x-2;
        r2 = 2-y;
    }
    else
    {
        r1 = x-2;
        r2 = y-2;
    }

    printf("%d\n", r1+r2);

    return 0;
}
