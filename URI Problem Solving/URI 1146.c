#include<stdio.h>
int main()
{
    int X, i;

    while (1)
    {
        scanf("%d", &X);

        if (X == 0)
        {
            break;
        }

        else
        {
            for (i = 1; i <= X; i++)
            {
                printf("%d", i);
                if (i < X)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");

    }
    return 0;
}


