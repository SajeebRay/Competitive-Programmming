#include<stdio.h>
int main()
{
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    while (a >= b)
    {
        count = count + b;
        a = a - (b-1);
    }
    count = count + a;
    printf("%d", count);

    return 0;
}
