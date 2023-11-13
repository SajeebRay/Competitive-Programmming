#include<stdio.h>
int main()
{
    int X, Y, i, j, temp;
    scanf("%d %d", &X, &Y);

    if (X > Y)
    {
        temp = X;
        X = Y;
        Y = temp;
    }

    for (i = 1; i <= Y; i)
    {
        for (j = 1; j <= X; j++, i++)
        {
                    if(i>Y)break;
                    printf("%d",i);
                    if(j<X)printf(" ");
        }

        printf("\n");
    }
    return 0;
}

