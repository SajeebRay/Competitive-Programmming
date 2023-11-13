#include<stdio.h>
int main()
{
    double num1, num2, result;
    scanf("%lf %lf", &num1, &num2);
    result = pow(num1 , num2);
    printf("%.2lf\n", result);
    return 0;
}
