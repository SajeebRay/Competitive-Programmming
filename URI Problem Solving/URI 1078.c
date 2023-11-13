#include<stdio.h>
int main()
{
    int i, N;

    while (scanf("%d", &N) == 1 && N > 1 && N < 1000)
    {
        for ( i = 1; i < 11; i++)
        {
            printf("%d x %d = %d\n", i,N,i*N);
        }
        break;
    }

    return 0;
}

