#include<stdio.h>

int main()
{
    unsigned long long int i, j, limit;
    int *sajeeb;

    printf(" Enter your limit: ");
    scanf("%llu", &limit);

    sajeeb = malloc(sizeof(int) * limit); //this is for allocate memory. because before sajeeb is a string
    for (i = 2; i < limit; i++)
    {
        sajeeb[i] = 1;
    }

    for (i = 2; i < limit; i++)
    {
        if (sajeeb[i])
        {
            for (j = i; i*j <limit; j++)
            {
                sajeeb[i*j] = 0;
            }
        }
    }

    /******* print prime *****************/
        printf("1\t Not Prime\n", i);
    for (i = 2; i < limit; i++)
    {
        if (sajeeb[i])
        {
            printf("%llu\t Prime\n", i);
        }
        else
        {
            printf("%llu\t Not Prime\n", i);
        }
    }

    return 0;
}
