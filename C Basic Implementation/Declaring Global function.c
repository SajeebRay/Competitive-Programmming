#include<stdio.h>

double pi = 3.145; //global function

void void_function(double pi)
{
    pi = 3.14159;
    return pi;
}

int main()
{
    printf("%lf\n",pi);

    void_function(pi);
    printf("%lf\n",pi);

    return 0;
}
