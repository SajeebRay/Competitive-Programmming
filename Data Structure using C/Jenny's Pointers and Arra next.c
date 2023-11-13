#include<stdio.h>
int main()
{
    int sajeeb[10], i;
    int *p = sajeeb;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &p[i]);
    // (p + i), (p + i)
    // &sajeeb[i], (i + sajeeb), (sajeeb + i)
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i[p]);
    // p[i], *(p + i), i[p]
    // sajeeb[i], i[sajeeb], *(sajeeb + i)
    }

    return 0;
}
