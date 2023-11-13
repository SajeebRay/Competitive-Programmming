#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int s, t; // house location
    scanf("%d %d", &s, &t);

    int a, b; // apple and orrange tree location
    scanf("%d %d", &a, &b);

    int m, n; // number of apple and orrange
    scanf("%d %d", &m, &n);

    int apple[m], orrange[n];
    int i;

    for (i = 0; i < m; i++)
    {
        scanf("%d", &apple[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &orrange[i]);
    }

    /*****  operations here *****/
    for (i = 0; i < m; i++)
    {
        apple[i] += a; // apple land at
    }

    for (i = 0; i < n; i++)
    {
        orrange[i] += b; // orrange land at
    }

    int count1 = 0, count2 = 0;
    for (i = 0; i < m; i++)
    {
        if (apple[i] >= s && t >= apple[i])
        {
            count1++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (orrange[i] >= s && t >= orrange[i])
        {
            count2++;
        }
    }

    printf("%d\n%d", count1, count2);

    return 0;
}
