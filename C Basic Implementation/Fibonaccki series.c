//0 1 1 2 3 5 8 13
#include<stdio.h>
int main()
{
    int sajeeb[20], i, n;
    sajeeb[0] = 0, sajeeb[1] = 1;

    scanf("%d", &n);


        for (i = 3; i <= n; i++)
        {
            sajeeb[i-1] = sajeeb[i-2] + sajeeb[i-3];
        }

        for (i = 1; i <= n; i++)
        {
            printf("%d ", sajeeb[i-1]);
        }

        printf("\n");

}
/*
#include <stdio.h>
int main()
{
    int first = 0, second = 1, count = 0, fibo;
    int n;

    scanf("%d", &n);

    while (count <= n)
    {
        if (count < 1)
        {
            fibo = count;
        }

        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        printf("%d ", fibo);
        count ++;
    }

    return 0;
}
*/
