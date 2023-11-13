
#include<stdio.h>
#include<math.h>

int prime_idn(int n)
{
    int i, root;

    if (n == 2)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 0;
    }

    root = sqrt(n);

    for (i = 3; i <= root; i = i + 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Not prime\n");
    }

    else if (1 == prime_idn(n))
    {
        printf("Prime\n");
    }

    else
    {
        printf("Not prime\n");
    }

    return 0;
}
