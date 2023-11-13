
#include<stdio.h>
int main()
{
    int M, N, sum, temp, i;

    while (1)
    {
        scanf("%d %d", &M, &N);

            if (M == N)
            {
                break;
            }

            else if (M > N)
            {
                printf("Decrescente\n");
            }

            else
            {
                printf("Crescente\n");
            }

    }

    return 0;
}
