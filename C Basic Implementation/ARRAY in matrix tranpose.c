#include<stdio.h>
int main()
{
    int sajeeb[20][20], saj[20][20];
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


    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            saj[i][j] = sajeeb[j][i];
            printf("%d ", saj[i][j]);
        }
        printf("\n");
    }

    return 0;
}

