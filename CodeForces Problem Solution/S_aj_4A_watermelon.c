#include <stdio.h>
int main()
{
    int w;

    while ((scanf("%d", &w)) == 1 && w <= 100 && w >= 0)
    {
        if (w % 2 == 0 && w > 2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        break;
    }
    return 0;
}
