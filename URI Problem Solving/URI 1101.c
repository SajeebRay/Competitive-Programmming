#include<stdio.h>
int main()
{
    int M, N, sum, temp, i;

    while (1)
    {
        scanf("%d %d", &M, &N);
        if (M <= 0 || 0 >= N)
        {
            break;
        }

        else
        {
            if (M > N)
            {
                temp = M;
                M = N;
                N = temp;
            }

            sum = 0;
            for (i = M; i <= N; i++)
            {
                sum = sum + i;
                printf("%d ", i);
            }

            printf("Sum=%d\n", sum);
        }
    }

    return 0;
}

