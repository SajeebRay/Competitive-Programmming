#include<stdio.h>
int main()
{
    int n, i, x, y, z, result, count;
    count = 0;
    scanf("%d", &n);
    if (n <= 1000 && 1 <= n)
    {

        for (i = 1; i <= n; i++)
        {
            scanf("%d %d %d", &x, &y, &z);
            if ((x == 1 && y == 1) || (x == 1 && z == 1) || (y == 1 && z == 1))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

