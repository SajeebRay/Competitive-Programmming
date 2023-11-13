#include<stdio.h>

int main()
{
    int n, x = 0;
    char saj[10];
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        gets(saj);

        if ((saj[0] == '+' && saj[1] == '+') || (saj[1] == '+' && saj[2] == '+'))
            x++;
        if ((saj[0] == '-' && saj[1] == '-') || (saj[1] == '-' && saj[2] == '-'))
            x--;

    }
    printf("%d\n", x);
    return 0;
}
