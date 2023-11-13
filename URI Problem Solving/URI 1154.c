#include <stdio.h>

int main()
{
    int N, sum = 0, count = 0;
    float f, c;

    while (scanf("%d", &N) == 1 && N > 0)
    {
        sum += N;
        count++;
    }

    f = sum;
    c = count;

    printf("%.2f\n", f/c );

    return 0;
}



