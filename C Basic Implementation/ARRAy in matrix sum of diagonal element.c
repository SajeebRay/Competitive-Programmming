#include<stdio.h>
int main()
{
    int sajeeb[20][20], saj[20][20], sum = 0, sum2 = 0;
    int i, j, r1, c1;
    scanf("%d %d", &r1, &c1);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Eliment sajeeb %d %d: ", i+1, j+1);
            scanf("%d", &sajeeb[i][j]);
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
    printf("\n\n\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (i == j)
            {
                sum = sum + sajeeb[i][j];
            }
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (i != j)
            {
                sum2 = sum2 + sajeeb[i][j];
            }
        }
    }

    printf("Sum of diagonal element = %d\n", sum);
    printf("Sum of trigonal element = %d\n", sum2);
    return 0;
}
