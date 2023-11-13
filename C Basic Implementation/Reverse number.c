#include<stdio.h>
int main()
{
    int num, n, n1, r, sum = 0;
    scanf("%d", &num);
    n = num;

    while(n != 0)
    {
        n1 = n/10;
        r = n % 10;
        n = n1;
        sum = sum + r;
    }

    sum = abs(sum);
    printf("Sum: %d\n", sum);

    return 0;
}
/*

#include<stdio.h>
int main()
{
    int num, n, n1, r, sum = 0;
    scanf("%d", &num);
    n = num;

    while(n != 0)
    {
        n1 = n/10;
        r = n % 10;
        n = n1;
        sum = sum *10 + r;

    }

    sum = abs(sum);
    printf("Sum: %d\n", sum);

    return 0;
}
*/
