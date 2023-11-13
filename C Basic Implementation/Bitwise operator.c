#include<stdio.h>
int main()
{
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);

    result = num1 & num2;
    printf("Result and: %d\n", result);

    result = num1 | num2;
    printf("Result or: %d\n", result);

    result = num1 ^ num2;
    printf("Result x-or: %d\n", result);

    return 0;
}
