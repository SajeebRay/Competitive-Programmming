#include <stdio.h>
int main()
{
    int i, saj[99], large = 0;

    for( i = 0; i < 100; i++)
    {
        scanf("%d", &saj[i]);
    }

    for( i = 0; i < 100; i++)
    {
        if (large > saj[i])
        {
            large;
        }
        else
        {
            large = saj[i];
        }
    }

    printf("%d\n", large);

    for (i = 0; i < 100; i++)
    {
        if (saj[i] == large)
        {
            printf("%d\n", i+1);
            break;
        }
    }

    return 0;
}
