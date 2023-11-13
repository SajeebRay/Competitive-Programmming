#include<stdio.h>
int main()
{
    int sajeeb[2][3][3], saj[2][4][4][4];
    int i, j, k, l;

    /** 3D **/
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("Side %d Row %d Column %d: ", i+1, j+1, k+1);
                 scanf("%d", &saj[i][j][k]);
            }
        }
    }

    /** 4D **/
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                for (l = 0; l < 4; l++)
                {
                    printf("Box %d Side %d Row %d Column %d: ", i+1, j+1, k+1, l+1);
                    scanf("%d", &saj[i][j][k][l]);
                }
            }
        }
    }

    /** 3D **/
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                 printf("%d", saj[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    /** 4D **/
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                for (l = 0; l < 4; l++)
                {
                    printf("%d", saj[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

}
