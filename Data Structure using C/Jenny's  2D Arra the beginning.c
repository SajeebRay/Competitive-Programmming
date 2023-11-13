#include<stdio.h>
int main()
{
    int sajeeb[2][3];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &sajeeb[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sajeeb[i][j]);
        }
        printf("\n");
    }

    return 0;
}
