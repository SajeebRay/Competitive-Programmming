
#include <stdio.h>

int main()
{
    int N, X, Y, sum = 0, count = 0, i, j;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);

        for (j = X; j >= X; j++)
        {
            if (j % 2 == 1)
            {   count += 1;
                sum += j;
                if (count == Y)
                {
                    break;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}

