#include<stdio.h>
int main()
{
    int X, Y, i, temp, sum = 0;
    scanf("%d %d", &X, &Y);

    if (Y < X)
    {
        temp = X;
        X = Y;
        Y = temp;
    }
    for (i = X; i <= Y; i++)
    {
        if (i % 13 == 0)
        {

        }
        else
        {
            sum  = sum + i;
        }
    }

    printf("%d\n", sum);

    return 0;
}

