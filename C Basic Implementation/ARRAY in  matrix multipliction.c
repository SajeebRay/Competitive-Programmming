#include<stdio.h>

int main()
{
    int sajeeb[20][20], saj[20][20], mul[20][20], sum = 0;
    int i, j, k, r1, c1, r2, c2;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    if (r2 == c1)
    {

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Eliment sajeeb %d %d: ", i+1, j+1);
                scanf("%d", &sajeeb[i][j]);
            }
        }
        printf("\n");

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("Eliment saj %d %d: ", i+1, j+1);
                scanf("%d", &saj[i][j]);
            }
        }
        printf("\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("  ");
                printf("%d", sajeeb[i][j]);
            }
            printf("\n");
        }
        printf("\n  x\n\n");

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("  ");
                printf("%d", saj[i][j]);
            }
            printf("\n");
        }

        /** multiplication **/
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < c1; k++)
                {
                    sum = sum + sajeeb[i][k] * saj[k][j];
                }

                mul[i][j] = sum;
                sum = 0;
            }
        }



        /** print **/
        printf("\n  Result\n\n");


        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("  ");
                printf("%d", mul[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Impossible to calculate\n");
    }

    return 0;
}
