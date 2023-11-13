#include <stdio.h>

int main()
{
    int N, i, X, COUNT1 = 0, COUNT2 = 0;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &X);

        if (X >= 10 && 20 >= X)
        {
            COUNT1++;
        }

        else
        {
            COUNT2++;
        }
    }

    printf("%d in\n%d out\n", COUNT1, COUNT2);

    return 0;
}
