#include<stdio.h>
#include<math.h>
int main()
{
    double x, result;
    scanf("%lf", &x);
    result = floor(x);
    // sin, cos,exp, tan,
    // round() = round figure create korbe
    //trunc() = remove floating point
    //ceil() = remove floating point and adding one
    //floor() = remove floating point but if this is negative so this is substraction one
    printf("%.2lf\n", result);
    return 0;
}
