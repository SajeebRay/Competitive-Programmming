#include<stdio.h>
int main()
{
    int n, m1, c1, mcount = 0, ccount = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &m1, &c1);
        if (m1 > c1)
            mcount++;
        else if (m1 < c1)
            ccount++;

    }
    if (mcount == ccount)
        printf("Friendship is magic!^^");
    else if (mcount > ccount)
        printf("Mishka");
    else
        printf("Chris");

    return 0;
}
