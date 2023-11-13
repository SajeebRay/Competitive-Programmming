#include<stdio.h>

unsigned long long int factorial_value(int n);

int main()
{
    unsigned long long int number, result;
    while (1)
    {
        printf("Enter number\n");
    scanf("%d", &number);

    result = factorial_value(number);

    printf("Result is: %llu\n", result);
    }

    return 0;
}

unsigned long long int factorial_value(int n)
{
    if (n == 1)
        return 1;

    else
       return n * factorial_value(n-1);
}
