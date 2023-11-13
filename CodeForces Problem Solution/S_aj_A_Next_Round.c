#include<stdio.h>
int main()
{
    int n, k, i, a[100], count = 0;
    scanf("%d %d", &n, &k);
    if ((1 <= k) && (k <= n) && (n <= 50))
    {
        for (i = 0; i < n; i++)
        {
            scanf ("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (a[i]>=a[k-1] && a[i]>0)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
