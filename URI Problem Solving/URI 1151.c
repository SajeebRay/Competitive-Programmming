#include <stdio.h>

int main()
{
    int N, first = 0,secound = 1, i,fibo = 0;
    scanf("%d", &N);

    if (N < 1)
    {
        printf("0\n");
    }

    for (i = 1; i <= N; i++)
    {
        printf("%d", fibo);
        first = secound;
        secound = fibo;
        fibo = first + secound;
        if (i < N)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

