
#include<stdio.h>
int main()
{
    int N, X, Y, i;
    float result;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);
        if (Y == 0)
        {
            printf("divisao impossivel\n");
        }

        else
        {
            result = (float)X / (float)Y;
            printf("%.1f\n", result);
        }

    }

    return 0;
}
