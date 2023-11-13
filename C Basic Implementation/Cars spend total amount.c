#include<stdio.h>
int main()
{
    int X;
    float Y,Distance;

    scanf("%d%f",&X,&Y);
    Distance = X/Y;

    printf("%.3f km/l",Distance);
    return 0;
}
