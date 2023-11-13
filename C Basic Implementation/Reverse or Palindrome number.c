
#include<stdio.h>
int main()
{
    int num, n, n1, r, sum = 0;
    scanf("%d", &num);
    n = num;

    while(n != 0) //palindrome
    {
        n1 = n/10;
        r = n % 10;
        n = n1;
        sum = sum *10 + r;

    }
    if (sum == num)
    {
        printf("This is palindrome.\n");
    }
    else
    {
        printf("This is not palindrome.\n");
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

    while(n != 0) //total of a number
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
*/
/*

#include<stdio.h>
int main()
{
    int num, n, n1, r, sum = 0;
    scanf("%d", &num);
    n = num;

    while(n != 0) //reverge number
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
/*
#include<stdio.h>
int main()
{
    int num, n, n1, r, sum = 0;
    scanf("%d", &num);
    n = num;

    while(n != 0) //armstrong
    {
        n1 = n/10;
        r = n % 10;
        n = n1;
        sum = sum + r*r*r;

    }
    if (sum == num)
    {
        printf("This is Armstrong.\a\n");
    }
    else
    {
        printf("This is not Armstrong.\a\n");
    }

    sum = abs(sum);
    printf("Sum: %d\n", sum);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num, n, n1, r, sum = 0;
    scanf("%d", &num);
    n = num;

    while(n != 0) //counting number
    {
        n1 = n/10;
        r = n % 10;
        n = n1;
        sum = sum + 1;

    }

    sum = abs(sum);
    printf("Sum: %d\n", sum);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num, n, n1, r, i, fact, sum = 0;
    scanf("%d", &num);
    n = num;

    while(n != 0) //strong number
    {
        n1 = n/10;
        r = n % 10;
        n = n1;
        fact = 1;
        ii
        for (i = 1; i <= r; i++)
        {
            fact = fact * i;

        }
        sum = sum + fact;
    }

    if (sum == num)
    {
        printf("This is Strong.\n");
    }
    else
    {
        printf("This is not Strong.\n");
    }


    return 0;
}
*/

