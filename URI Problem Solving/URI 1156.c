#include <stdio.h>

int main()
{
    float  sum = 1, i, count = 2;

    for (i = 3; i <= 39; i = i+2)
    {

        sum = sum + i / count;count *= 2;
    }

    printf("%.2f\n", sum);

    return 0;
}
