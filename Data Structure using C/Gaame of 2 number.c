#include<stdio.h>
int main()
{

    int number1, number2, value;
    char sign;
    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);
    value=number1+number2;
    sign='+';
    printf("%d %c %d=%d\n", number1, sign, number2, value);
    value=number1-number2;
    sign='-';
    printf("%d %c %d=%d\n", number1, sign, number2, value);
    value=number1*number2;
    sign='*';
    printf("%d %c %d=%d\n", number1, sign, number2, value);
    value=number1/number2;
    sign='/';
    printf("%d %c %d=%d\n", number1, sign, number2, value);




    return 0;
}
