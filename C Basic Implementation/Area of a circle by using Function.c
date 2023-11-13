#include<stdio.h>
double calculate_area(double R);
int main()
{
    double AREA,R;
    scanf("%lf",&R);
    AREA=calculate_area(R);
    printf("Area: %.2lf\n",AREA);
    return 0;
}
double calculate_area(double R)
{
    double Area, pi=3.14159;
    Area=pi*(R*R);
    return Area;
}
