#include<stdio.h>
#include<math.h>

int find_prime(int n)
{
    int i, temp;

    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    for (i = 2; i <= (sqrt(n)); i++)
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
    int n, l;

    scanf("%d", &l);
    for (n = 1; n <= l; n++)
    {
        if (find_prime(n) == 1)
        {
            printf("%d\tPrime\n", n);
        }
        else
        {
            printf("%d\tNot prime\n", n);s
        }
    }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int i = 0;

sajeeb:
    printf("%d\n", i);
    i++;

    if(i<6)
    goto sajeeb;

    return 0;
}
*/
