#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n == 1)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("#");
        }
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            printf("#");
        }
        printf("\n");
        for (int j =  2; j <= n-1; j++)
        {
            if (j % 2 == 1)
            {
                for (int i = 1; i <= m; i++)
                {
                    printf("#");
                }
                printf("\n");
            }
            else if (j % 4 == 0)
            {
                printf("#");
                for (int i = 2; i <= m; i++)
                {
                    printf(".");
                }
                printf("\n");
            }
            else
            {
                for (int i = 1; i < m; i++)
                {
                    printf(".");
                }
                printf("#");
                printf("\n");
            }
        }
        for (int i = 1; i <= m; i++)
        {
            printf("#");
        }
        printf("\n");

    }

    return 0;
}
