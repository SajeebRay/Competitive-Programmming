#include<stdio.h>
int main()
{
    int X, Y, i, j, temp, sum = 0;
    scanf("%d %d", &X, &Y);
    if(X > Y)
    {
        temp = X;
        X = Y;
        Y = temp;
    }

    for(i = (X+1); i < Y; i++)
    {
        if (i % 2 == 1 || i % 2 == -1)
        {
            sum =  sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
