#include<stdio.h>
int main()
{
    int sajeeb[2][3], saj[2][3], sum[2][3];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Eliment sajeeb %d %d: ", i+1, j+1);
            scanf("%d", &sajeeb[i][j]);
        }
    }
            printf("\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Eliment saj %d %d: ", i+1, j+1);
            scanf("%d", &saj[i][j]);
        }
    }
            printf("\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  ");
            printf("%d", sajeeb[i][j]);
        }
        printf("\n");
    }
            printf("\n");
            printf("\t+ OR -");
            printf("\n");
            printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  ");
            printf("%d", saj[i][j]);
        }
        printf("\n");
    }

    /** sum **/

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = sajeeb[i][j] + saj[i][j];
        }
    }

    printf("\nSum:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  ");
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }

    /** substract **/

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = sajeeb[i][j] - saj[i][j];
        }
    }

    printf("\nSubstract:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  ");
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
