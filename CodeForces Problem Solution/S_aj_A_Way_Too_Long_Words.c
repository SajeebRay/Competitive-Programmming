#include<stdio.h>
int main()
{
    int n, i, count, l;
    char saj[100];

    while ((scanf("%d", &n)) == 1 && n <= 100 && n >= 1)
    {
        for (i = 1; i <= n; i++)
        {
            scanf("%s", saj);
            l = strlen(saj);
            if(l <= 10)
            {
                printf("%s\n", saj);
            }
            else
            {
                printf("%c%d%c\n", saj[0], (l-2), saj[l-1]);
            }
        }
    }
    return 0;
}

